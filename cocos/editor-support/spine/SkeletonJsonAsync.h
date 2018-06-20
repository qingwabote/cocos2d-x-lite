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

class SkeletonJsonAsync: public Ref
{
public:
	static SkeletonJsonAsync * getInstance();

	SkeletonJsonAsync();
	virtual ~SkeletonJsonAsync();

	void readSkeletonDataAsync(const std::string& skeletonDataFile, spAtlas* atlas, float scale, const std::function<void(spSkeletonData*)>& callback);

private:
	std::thread* _loadingThread;
	struct AsyncStruct
	{
	public:
		AsyncStruct(const std::string& jsonPath, spAtlas* atlas, float scale, const std::function<void(spSkeletonData*)> f)
			: jsonPath(jsonPath), atlas(atlas), scale(scale), callback(f), skeletonData(nullptr)
		{}

		~AsyncStruct()
		{}

		std::string jsonPath;
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

	void readSkeletonData();
	void readSkeletonDataAsyncCallBack(float dt);
};

