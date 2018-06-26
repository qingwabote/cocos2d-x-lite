#include "SkeletonDataReader.h"
#include "Atlas.h"
#include "Cocos2dAttachmentLoader.h"
#include <spine/extension.h>
#include "SkeletonJson.h"
#include "SkeletonBinary.h"
#include "base/CCDirector.h"
#include "base/CCScheduler.h"

USING_NS_CC;

static SkeletonDataReader* _instance = nullptr;
SkeletonDataReader * SkeletonDataReader::getInstance()
{
	if (!_instance)
	{
		_instance = new (std::nothrow) SkeletonDataReader();
	}
	return _instance;
}

SkeletonDataReader::SkeletonDataReader()
	: _loadingThread(nullptr)
	, _asyncRefCount(0)
	, _needQuit(false)
{
}


SkeletonDataReader::~SkeletonDataReader()
{
	CC_SAFE_DELETE(_loadingThread);
}

spSkeletonData * SkeletonDataReader::readSkeletonData(const std::string & skeletonDataFile, spAtlas * atlas, float scale)
{
	spSkeletonData* skeletonData = nullptr;
	spAttachmentLoader* attachmentLoader = SUPER(Cocos2dAttachmentLoader_create(atlas));
	auto ext = skeletonDataFile.substr(skeletonDataFile.length() - 4);
	if (ext == "json")
	{
		spSkeletonJson* json = spSkeletonJson_createWithLoader(attachmentLoader);
		json->scale = scale;
		skeletonData = spSkeletonJson_readSkeletonDataFile(json, skeletonDataFile.c_str());
		CCASSERT(skeletonData, json->error ? json->error : "Error reading skeleton data file.");
		spSkeletonJson_dispose(json);
	}
	else if (ext == "skel")
	{
		spSkeletonBinary* binary = spSkeletonBinary_createWithLoader(attachmentLoader);
		binary->scale = scale;
		skeletonData = spSkeletonBinary_readSkeletonDataFile(binary, skeletonDataFile.c_str());
		CCASSERT(skeletonData, binary->error ? binary->error : "Error reading skeleton data file.");
		spSkeletonBinary_dispose(binary);
	}
	//spAttachmentLoader_dispose(attachmentLoader); it will be invoked in spSkeletonData_dispose
	return skeletonData;
}

void SkeletonDataReader::readSkeletonDataAsync(const std::string & skeletonDataFile, spAtlas* atlas, float scale, const std::function<void(spSkeletonData*)>& callback)
{
	if (!_loadingThread){
		_needQuit = false;
		_loadingThread = new (std::nothrow) std::thread(&SkeletonDataReader::readSkeletonDataLoop, this);
	}

	if (0 == _asyncRefCount){
		Director::getInstance()->getScheduler()->schedule(CC_SCHEDULE_SELECTOR(SkeletonDataReader::readSkeletonDataAsyncCallBack), this, 0, false);
	}

	++_asyncRefCount;

	AsyncStruct *data = new (std::nothrow) AsyncStruct(skeletonDataFile, atlas, scale, callback);

	std::unique_lock<std::mutex> ul(_requestMutex);
	_requestQueue.push_back(data);
	_sleepCondition.notify_one();
}

void SkeletonDataReader::readSkeletonDataLoop()
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

		asyncStruct->skeletonData = readSkeletonData(asyncStruct->skeletonDataFile, asyncStruct->atlas, asyncStruct->scale);

		_responseMutex.lock();
		_responseQueue.push_back(asyncStruct);
		_responseMutex.unlock();
	}
}

void SkeletonDataReader::readSkeletonDataAsyncCallBack(float dt)
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
		Director::getInstance()->getScheduler()->unschedule(CC_SCHEDULE_SELECTOR(SkeletonDataReader::readSkeletonDataAsyncCallBack), this);
	}
}
