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

class SkeletonDataReader: public Ref
{
public:
	static SkeletonDataReader * getInstance();

	SkeletonDataReader();
	virtual ~SkeletonDataReader();
	spSkeletonData* readSkeletonData(const std::string& skeletonDataFile, spAtlas* atlas, float scale);
	void readSkeletonDataAsync(const std::string& skeletonDataFile, spAtlas* atlas, float scale, const std::function<void(spSkeletonData*)>& callback);

private:
	std::thread* _loadingThread;
	struct AsyncStruct
	{
	public:
		AsyncStruct(const std::string& skeletonDataFile, spAtlas* atlas, float scale, const std::function<void(spSkeletonData*)> f)
			: skeletonDataFile(skeletonDataFile), atlas(atlas), scale(scale), callback(f), skeletonData(nullptr)
		{}

		~AsyncStruct()
		{}

		std::string skeletonDataFile;
		spAtlas* atlas;
		float scale;
		std::function<void(spSkeletonData*)> callback;
		spSkeletonData* skeletonData;
	};
	std::mutex _requestMutex;
	std::condition_variable _sleepCondition;
	std::deque<AsyncStruct*> _requestQueue;

	std::mutex _responseMutex;
	std::deque<AsyncStruct*> _responseQueue;

	int _asyncRefCount;
	bool _needQuit;

	void readSkeletonDataLoop();
	void readSkeletonDataAsyncCallBack(float dt);
};

