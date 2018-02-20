#pragma once
#include "base/ccConfig.h"

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"

extern se::Object* __jsb_cocos2d_extension_EventAssetsManagerEx_proto;
extern se::Class* __jsb_cocos2d_extension_EventAssetsManagerEx_class;

bool js_register_cocos2d_extension_EventAssetsManagerEx(se::Object* obj);
bool register_all_cocos2dx_extension(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getAssetsManagerEx);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getDownloadedFiles);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getTotalFiles);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getAssetId);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getTotalBytes);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getCURLECode);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getMessage);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getCURLMCode);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getDownloadedBytes);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getPercentByFile);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getEventCode);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_getPercent);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_isResuming);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventAssetsManagerEx_EventAssetsManagerEx);

extern se::Object* __jsb_cocos2d_extension_Manifest_proto;
extern se::Class* __jsb_cocos2d_extension_Manifest_class;

bool js_register_cocos2d_extension_Manifest(se::Object* obj);
bool register_all_cocos2dx_extension(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_getManifestRoot);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_setUpdating);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_getManifestFileUrl);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_isVersionLoaded);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_parseFile);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_isLoaded);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_getPackageUrl);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_isUpdating);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_getVersion);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_parseJSONString);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_getVersionFileUrl);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_getSearchPaths);
SE_DECLARE_FUNC(js_cocos2dx_extension_Manifest_Manifest);

extern se::Object* __jsb_cocos2d_extension_AssetsManagerEx_proto;
extern se::Class* __jsb_cocos2d_extension_AssetsManagerEx_class;

bool js_register_cocos2d_extension_AssetsManagerEx(se::Object* obj);
bool register_all_cocos2dx_extension(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getDownloadedFiles);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getState);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getMaxConcurrentTask);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getTotalFiles);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_loadRemoteManifest);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_checkUpdate);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getTotalBytes);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_setVerifyCallback);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getStoragePath);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_update);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_setVersionCompareHandle);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_setMaxConcurrentTask);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getDownloadedBytes);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getLocalManifest);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_loadLocalManifest);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_getRemoteManifest);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_prepareUpdate);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_downloadFailedAssets);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_isResuming);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_create);
SE_DECLARE_FUNC(js_cocos2dx_extension_AssetsManagerEx_AssetsManagerEx);

extern se::Object* __jsb_cocos2d_extension_EventListenerAssetsManagerEx_proto;
extern se::Class* __jsb_cocos2d_extension_EventListenerAssetsManagerEx_class;

bool js_register_cocos2d_extension_EventListenerAssetsManagerEx(se::Object* obj);
bool register_all_cocos2dx_extension(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventListenerAssetsManagerEx_init);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventListenerAssetsManagerEx_create);
SE_DECLARE_FUNC(js_cocos2dx_extension_EventListenerAssetsManagerEx_EventListenerAssetsManagerEx);

extern se::Object* __jsb_EffectNode_proto;
extern se::Class* __jsb_EffectNode_class;

bool js_register_EffectNode(se::Object* obj);
bool register_all_cocos2dx_extension(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_extension_EffectNode_setPosition);
SE_DECLARE_FUNC(js_cocos2dx_extension_EffectNode_init);
SE_DECLARE_FUNC(js_cocos2dx_extension_EffectNode_setIsLooping);
SE_DECLARE_FUNC(js_cocos2dx_extension_EffectNode_setScale);
SE_DECLARE_FUNC(js_cocos2dx_extension_EffectNode_create);
SE_DECLARE_FUNC(js_cocos2dx_extension_EffectNode_EffectNode);

