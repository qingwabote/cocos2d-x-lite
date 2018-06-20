#include "SkeletonJsonAsync.h"
#include "Atlas.h"
#include "Cocos2dAttachmentLoader.h"
#include <spine/extension.h>
#include "SkeletonJson.h"
#include "base/CCDirector.h"
#include "base/CCScheduler.h"

USING_NS_CC;

static SkeletonJsonAsync* _instance = nullptr;
SkeletonJsonAsync * SkeletonJsonAsync::getInstance()
{
	if (!_instance)
	{
		_instance = new (std::nothrow) SkeletonJsonAsync();
	}
	return _instance;
}

SkeletonJsonAsync::SkeletonJsonAsync()
	: _loadingThread(nullptr)
	, _asyncRefCount(0)
	, _needQuit(false)
{
}


SkeletonJsonAsync::~SkeletonJsonAsync()
{
	CC_SAFE_DELETE(_loadingThread);
}

void SkeletonJsonAsync::readSkeletonDataAsync(const std::string & jsonPath, spAtlas* atlas, float scale, const std::function<void(spSkeletonData*)>& callback)
{
	if (!_loadingThread){
		_needQuit = false;
		_loadingThread = new (std::nothrow) std::thread(&SkeletonJsonAsync::readSkeletonData, this);
	}

	if (0 == _asyncRefCount){
		Director::getInstance()->getScheduler()->schedule(CC_SCHEDULE_SELECTOR(SkeletonJsonAsync::readSkeletonDataAsyncCallBack), this, 0, false);
	}

	++_asyncRefCount;

	AsyncStruct *data = new (std::nothrow) AsyncStruct(jsonPath, atlas, scale, callback);

	std::unique_lock<std::mutex> ul(_requestMutex);
	_requestQueue.push_back(data);
	_sleepCondition.notify_one();
}

void SkeletonJsonAsync::readSkeletonData()
{
	AsyncStruct *asyncStruct = nullptr;
	while (!_needQuit) {
		std::unique_lock<std::mutex> ul(_requestMutex);
		if (_requestQueue.empty()) {
			asyncStruct = nullptr;
		} else {
			asyncStruct = _requestQueue.front();
			_requestQueue.pop_front();
		}
		if (!asyncStruct) {
			if (_needQuit) break;
			_sleepCondition.wait(ul);
			continue;
		}
		ul.unlock();

		spAttachmentLoader* attachmentLoader = SUPER(Cocos2dAttachmentLoader_create(asyncStruct->atlas));
		spSkeletonJson* json = spSkeletonJson_createWithLoader(attachmentLoader);
		json->scale = asyncStruct->scale;
		spSkeletonData* skeletonData = spSkeletonJson_readSkeletonDataFile(json, asyncStruct->jsonPath.c_str());
		CCASSERT(skeletonData, json->error ? json->error : "Error reading skeleton data file.");
		spSkeletonJson_dispose(json);
		//spAttachmentLoader_dispose(attachmentLoader); it will be invoked in spSkeletonData_dispose
		asyncStruct->skeletonData = skeletonData;

		_responseMutex.lock();
		_responseQueue.push_back(asyncStruct);
		_responseMutex.unlock();
	}
}

void SkeletonJsonAsync::readSkeletonDataAsyncCallBack(float dt)
{
	AsyncStruct *asyncStruct = nullptr;
	while (true) {
		_responseMutex.lock();
		if (_responseQueue.empty()) {
			asyncStruct = nullptr;
		}
		else {
			asyncStruct = _responseQueue.front();
			_responseQueue.pop_front();
		}
		_responseMutex.unlock();

		if (!asyncStruct) break;

		asyncStruct->callback(asyncStruct->skeletonData);
		delete asyncStruct;

		--_asyncRefCount;
	}

	if (0 == _asyncRefCount){
		Director::getInstance()->getScheduler()->unschedule(CC_SCHEDULE_SELECTOR(SkeletonJsonAsync::readSkeletonDataAsyncCallBack), this);
	}
}
