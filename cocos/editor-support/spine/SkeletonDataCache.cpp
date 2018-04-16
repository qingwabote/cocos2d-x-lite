#include "SkeletonDataCache.h"
#include "Atlas.h"
#include "Cocos2dAttachmentLoader.h"
#include <spine/extension.h>
#include "SkeletonJson.h"

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
{
}


SkeletonDataCache::~SkeletonDataCache()
{
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
		//spSkeletonJson* json = spSkeletonJson_create(addAtlas(atlasFile));
		json->scale = 1;
		skeletonData = spSkeletonJson_readSkeletonDataFile(json, skeletonDataFile.c_str());
		CCASSERT(skeletonData, json->error ? json->error : "Error reading skeleton data file.");
		spSkeletonJson_dispose(json);
		spAttachmentLoader_dispose(attachmentLoader);

		_skeletonDataMap.insert({ skeletonDataFile, skeletonData });
	}
	return skeletonData;
}
