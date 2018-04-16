#pragma once

#include "base/ccMacros.h"
#include <string>
#include <unordered_map>
#include "Atlas.h"
#include "SkeletonData.h"

class SkeletonDataCache
{
public:
	static SkeletonDataCache * getInstance();

	SkeletonDataCache();
	~SkeletonDataCache();

	spAtlas* addAtlas(const std::string& file);
	spSkeletonData* addSkeletonData(const std::string& skeletonDataFile, const std::string& atlasFile);
private:
	std::unordered_map<std::string, spAtlas*> _atlasMap;
	std::unordered_map<std::string, spSkeletonData*> _skeletonDataMap;
};

