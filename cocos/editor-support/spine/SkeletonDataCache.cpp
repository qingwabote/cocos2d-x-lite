#include "SkeletonDataCache.h"
#include "Atlas.h"
#include "Cocos2dAttachmentLoader.h"
#include <spine/extension.h>
#include "SkeletonJson.h"
#include "base/CCDirector.h"
#include "base/CCScheduler.h"

USING_NS_CC;

static SkeletonDataCache* _instance = nullptr;
SkeletonDataCache * SkeletonDataCache::getInstance()
{
	if (!_instance)
	{
		_instance = new (std::nothrow) SkeletonDataCache();
	}
	return _instance;
}

SkeletonDataCache::SkeletonDataCache()
	: _loadingThread(nullptr)
	, _asyncRefCount(0)
	, _needQuit(false)
{
}


SkeletonDataCache::~SkeletonDataCache()
{
	CC_SAFE_DELETE(_loadingThread);
}

spAtlas * SkeletonDataCache::addAtlas(const std::string& file)
{
	spAtlas* atlas = nullptr;
	auto it = _atlasMap.find(file);
	if (it != _atlasMap.end()) atlas = it->second;
	if (!atlas) {
		atlas = spAtlas_createFromFile(file.c_str(), 0);
		CCASSERT(atlas, "Error reading atlas file.");

		_atlasMap.insert({ file, atlas });
	}
	return atlas;
}

spSkeletonData * SkeletonDataCache::addSkeletonData(const std::string& skeletonDataFile, const std::string& atlasFile)
{
	spSkeletonData* skeletonData = nullptr;
	auto it = _skeletonDataMap.find(skeletonDataFile);
	if (it != _skeletonDataMap.end()) skeletonData = it->second;
	if (!skeletonData) {
		auto attachmentLoader = SUPER(Cocos2dAttachmentLoader_create(addAtlas(atlasFile)));
		spSkeletonJson* json = spSkeletonJson_createWithLoader(attachmentLoader);
		json->scale = 1;
		skeletonData = spSkeletonJson_readSkeletonDataFile(json, skeletonDataFile.c_str());
		CCASSERT(skeletonData, json->error ? json->error : "Error reading skeleton data file.");
		spSkeletonJson_dispose(json);
		spAttachmentLoader_dispose(attachmentLoader);

		_skeletonDataMap.insert({ skeletonDataFile, skeletonData });
	}
	return skeletonData;
}

void SkeletonDataCache::addSkeletonDataAsync(const std::string & skeletonDataFile, const std::string & atlasFile, const std::function<void()>& callback)
{
	auto it = _skeletonDataMap.find(skeletonDataFile);
	if (it != _skeletonDataMap.end()) {
		callback();
		return;
	}

	// load atlas on main thread
	addAtlas(atlasFile);

	if (!_loadingThread){
		_needQuit = false;
		_loadingThread = new (std::nothrow) std::thread(&SkeletonDataCache::loadSkeletonData, this);
	}

	if (0 == _asyncRefCount){
		Director::getInstance()->getScheduler()->schedule(CC_SCHEDULE_SELECTOR(SkeletonDataCache::addSkeletonDataAsyncCallBack), this, 0, false);
	}

	++_asyncRefCount;

	AsyncStruct *data = new (std::nothrow) AsyncStruct(skeletonDataFile, atlasFile, callback);

	std::unique_lock<std::mutex> ul(_requestMutex);
	_requestQueue.push_back(data);
	_sleepCondition.notify_one();
}

void SkeletonDataCache::loadSkeletonData()
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

		spSkeletonData* skeletonData = nullptr;
		auto attachmentLoader = SUPER(Cocos2dAttachmentLoader_create(_atlasMap.find(asyncStruct->atlasFile)->second));
		spSkeletonJson* json = spSkeletonJson_createWithLoader(attachmentLoader);
		json->scale = 1;
		skeletonData = spSkeletonJson_readSkeletonDataFile(json, asyncStruct->skeletonDataFile.c_str());
		CCASSERT(skeletonData, json->error ? json->error : "Error reading skeleton data file.");
		spSkeletonJson_dispose(json);
		spAttachmentLoader_dispose(attachmentLoader);
		asyncStruct->skeletonData = skeletonData;

		_responseMutex.lock();
		_responseQueue.push_back(asyncStruct);
		_responseMutex.unlock();
	}
}

void SkeletonDataCache::addSkeletonDataAsyncCallBack(float dt)
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

		//TODO if (_skeletonDataMap.find(asyncStruct->skeletonDataFile) != _skeletonDataMap.end())
		_skeletonDataMap.insert({ asyncStruct->skeletonDataFile, asyncStruct->skeletonData });

		asyncStruct->callback();
		delete asyncStruct;

		--_asyncRefCount;
	}

	if (0 == _asyncRefCount){
		Director::getInstance()->getScheduler()->unschedule(CC_SCHEDULE_SELECTOR(SkeletonDataCache::addSkeletonDataAsyncCallBack), this);
	}
}
