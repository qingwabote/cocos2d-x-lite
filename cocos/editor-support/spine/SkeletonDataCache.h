#pragma once

#include <string>
#include <unordered_map>
#include <queue>
#include <condition_variable>
#include "base/ccMacros.h"
#include "base/CCRef.h"
#include "Atlas.h"
#include "SkeletonData.h"

USING_NS_CC;

class SkeletonDataCache: public Ref
{
public:
	static SkeletonDataCache * getInstance();

	SkeletonDataCache();
	virtual ~SkeletonDataCache();

	spAtlas* addAtlas(const std::string& file);
	spSkeletonData* addSkeletonData(const std::string& skeletonDataFile, const std::string& atlasFile);
	void addSkeletonDataAsync(const std::string& skeletonDataFile, const std::string& atlasFile, const std::function<void()>& callback);

private:
	std::unordered_map<std::string, spAtlas*> _atlasMap;
	std::unordered_map<std::string, spSkeletonData*> _skeletonDataMap;

	std::thread* _loadingThread;
	struct AsyncStruct
	{
	public:
		AsyncStruct(const std::string& skeletonDataFile, const std::string atlasFile, std::function<void()> f)
			: skeletonDataFile(skeletonDataFile), atlasFile(atlasFile), callback(f), skeletonData(nullptr)
		{}

		~AsyncStruct()
		{}

		std::string skeletonDataFile;
		std::string atlasFile;
		std::function<void()> callback;
		spSkeletonData* skeletonData;
	};
	std::mutex _requestMutex;
	std::condition_variable _sleepCondition;
	std::deque<AsyncStruct*> _requestQueue;

	std::mutex _responseMutex;
	std::deque<AsyncStruct*> _responseQueue;

	int _asyncRefCount;
	bool _needQuit;

	void loadSkeletonData();
	void addSkeletonDataAsyncCallBack(float dt);
};

