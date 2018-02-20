#pragma once
#include "base/ccConfig.h"

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"

extern se::Object* __jsb_dragonBones_BaseObject_proto;
extern se::Class* __jsb_dragonBones_BaseObject_class;

bool js_register_dragonBones_BaseObject(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseObject_getClassTypeIndex);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseObject_returnToPool);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseObject_clearPool);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseObject_setMaxCount);

extern se::Object* __jsb_dragonBones_Matrix_proto;
extern se::Class* __jsb_dragonBones_Matrix_class;

bool js_register_dragonBones_Matrix(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);

extern se::Object* __jsb_dragonBones_Transform_proto;
extern se::Class* __jsb_dragonBones_Transform_class;

bool js_register_dragonBones_Transform(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Transform_getRotation);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Transform_setRotation);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Transform_normalizeRadian);

extern se::Object* __jsb_dragonBones_TextureData_proto;
extern se::Class* __jsb_dragonBones_TextureData_class;

bool js_register_dragonBones_TextureData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);

extern se::Object* __jsb_dragonBones_TextureAtlasData_proto;
extern se::Class* __jsb_dragonBones_TextureAtlasData_class;

bool js_register_dragonBones_TextureAtlasData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TextureAtlasData_addTexture);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TextureAtlasData_generateTexture);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TextureAtlasData_getTexture);

extern se::Object* __jsb_dragonBones_AnimationData_proto;
extern se::Class* __jsb_dragonBones_AnimationData_class;

bool js_register_dragonBones_AnimationData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationData_getClassTypeIndex);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationData_getTypeIndex);

extern se::Object* __jsb_dragonBones_BoneData_proto;
extern se::Class* __jsb_dragonBones_BoneData_class;

bool js_register_dragonBones_BoneData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BoneData_getTypeIndex);

extern se::Object* __jsb_dragonBones_SlotData_proto;
extern se::Class* __jsb_dragonBones_SlotData_class;

bool js_register_dragonBones_SlotData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_SlotData_getTypeIndex);

extern se::Object* __jsb_dragonBones_SkinData_proto;
extern se::Class* __jsb_dragonBones_SkinData_class;

bool js_register_dragonBones_SkinData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_SkinData_getTypeIndex);

extern se::Object* __jsb_dragonBones_ArmatureData_proto;
extern se::Class* __jsb_dragonBones_ArmatureData_class;

bool js_register_dragonBones_ArmatureData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getBone);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getAnimation);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getSlot);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getSkin);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getDefaultSkin);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getDefaultAnimation);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_ArmatureData_getTypeIndex);

extern se::Object* __jsb_dragonBones_DragonBonesData_proto;
extern se::Class* __jsb_dragonBones_DragonBonesData_class;

bool js_register_dragonBones_DragonBonesData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_DragonBonesData_getArmatureNames);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_DragonBonesData_getArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_DragonBonesData_addArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_DragonBonesData_getTypeIndex);

extern se::Object* __jsb_dragonBones_EventObject_proto;
extern se::Class* __jsb_dragonBones_EventObject_class;

bool js_register_dragonBones_EventObject(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_EventObject_getTypeIndex);

extern se::Object* __jsb_dragonBones_Armature_proto;
extern se::Class* __jsb_dragonBones_Armature_class;

bool js_register_dragonBones_Armature(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getSlot);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature__bufferAction);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getCacheFrameRate);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getName);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_dispose);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_addSlot);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_invalidUpdate);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getBoneByDisplay);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_setCacheFrameRate);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_removeSlot);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_addBone);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_advanceTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getBone);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getParent);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getSlotByDisplay);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_removeBone);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_replaceTexture);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Armature_getTypeIndex);

extern se::Object* __jsb_dragonBones_Animation_proto;
extern se::Class* __jsb_dragonBones_Animation_class;

bool js_register_dragonBones_Animation(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_reset);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_play);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_getLastAnimationState);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_stop);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_hasAnimation);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_gotoAndStopByProgress);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_gotoAndStopByTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_getAnimationNames);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_gotoAndPlayByTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_isCompleted);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_fadeIn);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_gotoAndPlayByFrame);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_getLastAnimationName);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_getState);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_isPlaying);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_gotoAndStopByFrame);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_gotoAndPlayByProgress);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Animation_getTypeIndex);

extern se::Object* __jsb_dragonBones_TransformObject_proto;
extern se::Class* __jsb_dragonBones_TransformObject_class;

bool js_register_dragonBones_TransformObject(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TransformObject__setArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TransformObject__setParent);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TransformObject_getParent);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_TransformObject_getArmature);

extern se::Object* __jsb_dragonBones_Bone_proto;
extern se::Class* __jsb_dragonBones_Bone_class;

bool js_register_dragonBones_Bone(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_getIK);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_getIKChainIndex);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_contains);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_getIKChain);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_getVisible);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_setVisible);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_invalidUpdate);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Bone_getTypeIndex);

extern se::Object* __jsb_dragonBones_Slot_proto;
extern se::Class* __jsb_dragonBones_Slot_class;

bool js_register_dragonBones_Slot(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Slot_getChildArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Slot_invalidUpdate);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Slot_setDisplayIndex);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Slot_setChildArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_Slot_getDisplayIndex);

extern se::Object* __jsb_dragonBones_BaseFactory_proto;
extern se::Class* __jsb_dragonBones_BaseFactory_class;

bool js_register_dragonBones_BaseFactory(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_removeDragonBonesData);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_removeTextureAtlasData);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_parseDragonBonesData);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_clear);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_addDragonBonesData);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_buildArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_addTextureAtlasData);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_BaseFactory_getDragonBonesData);

extern se::Object* __jsb_dragonBones_WorldClock_proto;
extern se::Class* __jsb_dragonBones_WorldClock_class;

bool js_register_dragonBones_WorldClock(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_WorldClock_clear);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_WorldClock_advanceTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_WorldClock_contains);

extern se::Object* __jsb_dragonBones_AnimationState_proto;
extern se::Class* __jsb_dragonBones_AnimationState_class;

bool js_register_dragonBones_AnimationState(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_setCurrentTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_removeBoneMask);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getGroup);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getCurrentPlayTimes);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getName);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getCurrentTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getTotalTime);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_removeAllBoneMask);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getLayer);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_isCompleted);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_play);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_fadeOut);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_stop);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_isPlaying);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_addBoneMask);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_containsBoneMask);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_AnimationState_getTypeIndex);

extern se::Object* __jsb_dragonBones_CCTextureData_proto;
extern se::Class* __jsb_dragonBones_CCTextureData_class;

bool js_register_dragonBones_CCTextureData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCTextureData_getTypeIndex);

extern se::Object* __jsb_dragonBones_CCTextureAtlasData_proto;
extern se::Class* __jsb_dragonBones_CCTextureAtlasData_class;

bool js_register_dragonBones_CCTextureAtlasData(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCTextureAtlasData_getTypeIndex);

extern se::Object* __jsb_dragonBones_CCArmatureDisplay_proto;
extern se::Class* __jsb_dragonBones_CCArmatureDisplay_class;

bool js_register_dragonBones_CCArmatureDisplay(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_advanceTimeBySelf);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_removeEvent);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_dispose);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_hasEventCallback);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_setEventCallback);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_clearEventCallback);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_addEvent);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_hasEvent);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_getArmature);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCArmatureDisplay_create);

extern se::Object* __jsb_dragonBones_DBCCSprite_proto;
extern se::Class* __jsb_dragonBones_DBCCSprite_class;

bool js_register_dragonBones_DBCCSprite(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_DBCCSprite_create);

extern se::Object* __jsb_dragonBones_CCSlot_proto;
extern se::Class* __jsb_dragonBones_CCSlot_class;

bool js_register_dragonBones_CCSlot(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCSlot_getClassTypeIndex);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCSlot_getTypeIndex);

extern se::Object* __jsb_dragonBones_CCFactory_proto;
extern se::Class* __jsb_dragonBones_CCFactory_class;

bool js_register_dragonBones_CCFactory(se::Object* obj);
bool register_all_cocos2dx_dragonbones(se::Object* obj);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_getTextureDisplay);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_getSoundEventManater);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_buildArmatureDisplay);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_parseTextureAtlasData);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_destroyInstance);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_getInstance);
SE_DECLARE_FUNC(js_cocos2dx_dragonbones_CCFactory_CCFactory);

