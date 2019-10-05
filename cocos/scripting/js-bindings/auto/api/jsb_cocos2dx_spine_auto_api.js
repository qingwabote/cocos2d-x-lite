/**
 * @module cocos2dx_spine
 */
var sp = sp || {};

/**
 * @class Animation
 */
sp.Animation = {

/**
 * @method getTimelines
 * @return {sp.Vector<sp.Timeline >}
 */
getTimelines : function (
)
{
    return sp.Vector<sp.Timeline >;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method setDuration
 * @param {float} arg0
 */
setDuration : function (
float 
)
{
},

/**
 * @method getDuration
 * @return {float}
 */
getDuration : function (
)
{
    return 0;
},

};

/**
 * @class TrackEntry
 */
sp.TrackEntry = {

/**
 * @method getNext
 * @return {sp.TrackEntry}
 */
getNext : function (
)
{
    return sp.TrackEntry;
},

/**
 * @method getAttachmentThreshold
 * @return {float}
 */
getAttachmentThreshold : function (
)
{
    return 0;
},

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method getMixDuration
 * @return {float}
 */
getMixDuration : function (
)
{
    return 0;
},

/**
 * @method setAnimationEnd
 * @param {float} arg0
 */
setAnimationEnd : function (
float 
)
{
},

/**
 * @method setEventThreshold
 * @param {float} arg0
 */
setEventThreshold : function (
float 
)
{
},

/**
 * @method getMixingTo
 * @return {sp.TrackEntry}
 */
getMixingTo : function (
)
{
    return sp.TrackEntry;
},

/**
 * @method setTrackEnd
 * @param {float} arg0
 */
setTrackEnd : function (
float 
)
{
},

/**
 * @method getMixBlend
 * @return {sp.MixBlend}
 */
getMixBlend : function (
)
{
    return 0;
},

/**
 * @method getTrackEnd
 * @return {float}
 */
getTrackEnd : function (
)
{
    return 0;
},

/**
 * @method setDelay
 * @param {float} arg0
 */
setDelay : function (
float 
)
{
},

/**
 * @method getAnimationEnd
 * @return {float}
 */
getAnimationEnd : function (
)
{
    return 0;
},

/**
 * @method setAttachmentThreshold
 * @param {float} arg0
 */
setAttachmentThreshold : function (
float 
)
{
},

/**
 * @method setMixTime
 * @param {float} arg0
 */
setMixTime : function (
float 
)
{
},

/**
 * @method isComplete
 * @return {bool}
 */
isComplete : function (
)
{
    return false;
},

/**
 * @method getMixingFrom
 * @return {sp.TrackEntry}
 */
getMixingFrom : function (
)
{
    return sp.TrackEntry;
},

/**
 * @method setAlpha
 * @param {float} arg0
 */
setAlpha : function (
float 
)
{
},

/**
 * @method getDrawOrderThreshold
 * @return {float}
 */
getDrawOrderThreshold : function (
)
{
    return 0;
},

/**
 * @method getMixTime
 * @return {float}
 */
getMixTime : function (
)
{
    return 0;
},

/**
 * @method setTrackTime
 * @param {float} arg0
 */
setTrackTime : function (
float 
)
{
},

/**
 * @method setMixDuration
 * @param {float} arg0
 */
setMixDuration : function (
float 
)
{
},

/**
 * @method resetRotationDirections
 */
resetRotationDirections : function (
)
{
},

/**
 * @method setHoldPrevious
 * @param {bool} arg0
 */
setHoldPrevious : function (
bool 
)
{
},

/**
 * @method getLoop
 * @return {bool}
 */
getLoop : function (
)
{
    return false;
},

/**
 * @method getTrackTime
 * @return {float}
 */
getTrackTime : function (
)
{
    return 0;
},

/**
 * @method getAnimationStart
 * @return {float}
 */
getAnimationStart : function (
)
{
    return 0;
},

/**
 * @method getAnimationLast
 * @return {float}
 */
getAnimationLast : function (
)
{
    return 0;
},

/**
 * @method setAnimationStart
 * @param {float} arg0
 */
setAnimationStart : function (
float 
)
{
},

/**
 * @method setLoop
 * @param {bool} arg0
 */
setLoop : function (
bool 
)
{
},

/**
 * @method getTrackIndex
 * @return {int}
 */
getTrackIndex : function (
)
{
    return 0;
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

/**
 * @method getDelay
 * @return {float}
 */
getDelay : function (
)
{
    return 0;
},

/**
 * @method getAnimation
 * @return {sp.Animation}
 */
getAnimation : function (
)
{
    return sp.Animation;
},

/**
 * @method getHoldPrevious
 * @return {bool}
 */
getHoldPrevious : function (
)
{
    return false;
},

/**
 * @method getAnimationTime
 * @return {float}
 */
getAnimationTime : function (
)
{
    return 0;
},

/**
 * @method getEventThreshold
 * @return {float}
 */
getEventThreshold : function (
)
{
    return 0;
},

/**
 * @method setDrawOrderThreshold
 * @param {float} arg0
 */
setDrawOrderThreshold : function (
float 
)
{
},

/**
 * @method setAnimationLast
 * @param {float} arg0
 */
setAnimationLast : function (
float 
)
{
},

/**
 * @method getAlpha
 * @return {float}
 */
getAlpha : function (
)
{
    return 0;
},

/**
 * @method setMixBlend
 * @param {sp.MixBlend} arg0
 */
setMixBlend : function (
mixblend 
)
{
},

};

/**
 * @class AnimationState
 */
sp.AnimationState = {

/**
 * @method getData
 * @return {sp.AnimationStateData}
 */
getData : function (
)
{
    return sp.AnimationStateData;
},

/**
 * @method addAnimation
* @param {unsigned long|unsigned long} long
* @param {sp.Animation|sp.String} animation
* @param {bool|bool} bool
* @param {float|float} float
* @return {sp.TrackEntry|sp.TrackEntry}
*/
addAnimation : function(
long,
string,
bool,
float 
)
{
    return sp.TrackEntry;
},

/**
 * @method setEmptyAnimations
 * @param {float} arg0
 */
setEmptyAnimations : function (
float 
)
{
},

/**
 * @method getCurrent
 * @param {unsigned long} arg0
 * @return {sp.TrackEntry}
 */
getCurrent : function (
long 
)
{
    return sp.TrackEntry;
},

/**
 * @method enableQueue
 */
enableQueue : function (
)
{
},

/**
 * @method clearTracks
 */
clearTracks : function (
)
{
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method disableQueue
 */
disableQueue : function (
)
{
},

/**
 * @method setEmptyAnimation
 * @param {unsigned long} arg0
 * @param {float} arg1
 * @return {sp.TrackEntry}
 */
setEmptyAnimation : function (
long, 
float 
)
{
    return sp.TrackEntry;
},

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method getTracks
 * @return {sp.Vector<sp.TrackEntry >}
 */
getTracks : function (
)
{
    return sp.Vector<sp.TrackEntry >;
},

/**
 * @method clearTrack
 * @param {unsigned long} arg0
 */
clearTrack : function (
long 
)
{
},

/**
 * @method setAnimation
* @param {unsigned long|unsigned long} long
* @param {sp.Animation|sp.String} animation
* @param {bool|bool} bool
* @return {sp.TrackEntry|sp.TrackEntry}
*/
setAnimation : function(
long,
string,
bool 
)
{
    return sp.TrackEntry;
},

/**
 * @method addEmptyAnimation
 * @param {unsigned long} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @return {sp.TrackEntry}
 */
addEmptyAnimation : function (
long, 
float, 
float 
)
{
    return sp.TrackEntry;
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

};

/**
 * @class AnimationStateData
 */
sp.AnimationStateData = {

/**
 * @method getMix
 * @param {sp.Animation} arg0
 * @param {sp.Animation} arg1
 * @return {float}
 */
getMix : function (
animation, 
animation 
)
{
    return 0;
},

/**
 * @method getDefaultMix
 * @return {float}
 */
getDefaultMix : function (
)
{
    return 0;
},

/**
 * @method setMix
* @param {sp.Animation|sp.String} animation
* @param {sp.Animation|sp.String} animation
* @param {float|float} float
*/
setMix : function(
string,
string,
float 
)
{
},

/**
 * @method setDefaultMix
 * @param {float} arg0
 */
setDefaultMix : function (
float 
)
{
},

/**
 * @method getSkeletonData
 * @return {sp.SkeletonData}
 */
getSkeletonData : function (
)
{
    return sp.SkeletonData;
},

};

/**
 * @class Attachment
 */
sp.Attachment = {

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

};

/**
 * @class Timeline
 */
sp.Timeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

};

/**
 * @class AttachmentTimeline
 */
sp.AttachmentTimeline = {

/**
 * @method getAttachmentNames
 * @return {sp.Vector<sp.String>}
 */
getAttachmentNames : function (
)
{
    return sp.Vector<sp.String>;
},

/**
 * @method setSlotIndex
 * @param {unsigned long} arg0
 */
setSlotIndex : function (
long 
)
{
},

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {sp.String} arg2
 */
setFrame : function (
int, 
float, 
string 
)
{
},

/**
 * @method getSlotIndex
 * @return {unsigned long}
 */
getSlotIndex : function (
)
{
    return 0;
},

/**
 * @method getFrameCount
 * @return {unsigned long}
 */
getFrameCount : function (
)
{
    return 0;
},

/**
 * @method getFrames
 * @return {sp.Vector<float>}
 */
getFrames : function (
)
{
    return sp.Vector<float>;
},

};

/**
 * @class Bone
 */
sp.Bone = {

/**
 * @method setD
 * @param {float} arg0
 */
setD : function (
float 
)
{
},

/**
 * @method setAppliedRotation
 * @param {float} arg0
 */
setAppliedRotation : function (
float 
)
{
},

/**
 * @method setAScaleY
 * @param {float} arg0
 */
setAScaleY : function (
float 
)
{
},

/**
 * @method setAScaleX
 * @param {float} arg0
 */
setAScaleX : function (
float 
)
{
},

/**
 * @method getB
 * @return {float}
 */
getB : function (
)
{
    return 0;
},

/**
 * @method getC
 * @return {float}
 */
getC : function (
)
{
    return 0;
},

/**
 * @method getD
 * @return {float}
 */
getD : function (
)
{
    return 0;
},

/**
 * @method getWorldScaleY
 * @return {float}
 */
getWorldScaleY : function (
)
{
    return 0;
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getChildren
 * @return {sp.Vector<sp.Bone >}
 */
getChildren : function (
)
{
    return sp.Vector<sp.Bone >;
},

/**
 * @method setWorldX
 * @param {float} arg0
 */
setWorldX : function (
float 
)
{
},

/**
 * @method setAppliedValid
 * @param {bool} arg0
 */
setAppliedValid : function (
bool 
)
{
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method getAShearX
 * @return {float}
 */
getAShearX : function (
)
{
    return 0;
},

/**
 * @method getAShearY
 * @return {float}
 */
getAShearY : function (
)
{
    return 0;
},

/**
 * @method getWorldRotationY
 * @return {float}
 */
getWorldRotationY : function (
)
{
    return 0;
},

/**
 * @method isAppliedValid
 * @return {bool}
 */
isAppliedValid : function (
)
{
    return false;
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getWorldToLocalRotationX
 * @return {float}
 */
getWorldToLocalRotationX : function (
)
{
    return 0;
},

/**
 * @method getWorldToLocalRotationY
 * @return {float}
 */
getWorldToLocalRotationY : function (
)
{
    return 0;
},

/**
 * @method getAScaleX
 * @return {float}
 */
getAScaleX : function (
)
{
    return 0;
},

/**
 * @method getA
 * @return {float}
 */
getA : function (
)
{
    return 0;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method getAX
 * @return {float}
 */
getAX : function (
)
{
    return 0;
},

/**
 * @method getData
 * @return {sp.BoneData}
 */
getData : function (
)
{
    return sp.BoneData;
},

/**
 * @method setShearX
 * @param {float} arg0
 */
setShearX : function (
float 
)
{
},

/**
 * @method setShearY
 * @param {float} arg0
 */
setShearY : function (
float 
)
{
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method setA
 * @param {float} arg0
 */
setA : function (
float 
)
{
},

/**
 * @method setB
 * @param {float} arg0
 */
setB : function (
float 
)
{
},

/**
 * @method getAScaleY
 * @return {float}
 */
getAScaleY : function (
)
{
    return 0;
},

/**
 * @method getWorldScaleX
 * @return {float}
 */
getWorldScaleX : function (
)
{
    return 0;
},

/**
 * @method getWorldRotationX
 * @return {float}
 */
getWorldRotationX : function (
)
{
    return 0;
},

/**
 * @method getShearX
 * @return {float}
 */
getShearX : function (
)
{
    return 0;
},

/**
 * @method update
 */
update : function (
)
{
},

/**
 * @method getShearY
 * @return {float}
 */
getShearY : function (
)
{
    return 0;
},

/**
 * @method setAShearX
 * @param {float} arg0
 */
setAShearX : function (
float 
)
{
},

/**
 * @method setAShearY
 * @param {float} arg0
 */
setAShearY : function (
float 
)
{
},

/**
 * @method setC
 * @param {float} arg0
 */
setC : function (
float 
)
{
},

/**
 * @method setWorldY
 * @param {float} arg0
 */
setWorldY : function (
float 
)
{
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method setAX
 * @param {float} arg0
 */
setAX : function (
float 
)
{
},

/**
 * @method setAY
 * @param {float} arg0
 */
setAY : function (
float 
)
{
},

/**
 * @method getAY
 * @return {float}
 */
getAY : function (
)
{
    return 0;
},

/**
 * @method rotateWorld
 * @param {float} arg0
 */
rotateWorld : function (
float 
)
{
},

/**
 * @method getParent
 * @return {sp.Bone}
 */
getParent : function (
)
{
    return sp.Bone;
},

/**
 * @method getAppliedRotation
 * @return {float}
 */
getAppliedRotation : function (
)
{
    return 0;
},

/**
 * @method updateWorldTransform
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
* @param {float} float
*/
updateWorldTransform : function(
float,
float,
float,
float,
float,
float,
float 
)
{
},

/**
 * @method getWorldY
 * @return {float}
 */
getWorldY : function (
)
{
    return 0;
},

/**
 * @method getWorldX
 * @return {float}
 */
getWorldX : function (
)
{
    return 0;
},

/**
 * @method getSkeleton
 * @return {sp.Skeleton}
 */
getSkeleton : function (
)
{
    return sp.Skeleton;
},

/**
 * @method isYDown
 * @return {bool}
 */
isYDown : function (
)
{
    return false;
},

/**
 * @method setYDown
 * @param {bool} arg0
 */
setYDown : function (
bool 
)
{
},

};

/**
 * @class BoneData
 */
sp.BoneData = {

/**
 * @method getIndex
 * @return {int}
 */
getIndex : function (
)
{
    return 0;
},

/**
 * @method setShearX
 * @param {float} arg0
 */
setShearX : function (
float 
)
{
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method getParent
 * @return {sp.BoneData}
 */
getParent : function (
)
{
    return sp.BoneData;
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method getLength
 * @return {float}
 */
getLength : function (
)
{
    return 0;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method getShearX
 * @return {float}
 */
getShearX : function (
)
{
    return 0;
},

/**
 * @method getShearY
 * @return {float}
 */
getShearY : function (
)
{
    return 0;
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method getTransformMode
 * @return {sp.TransformMode}
 */
getTransformMode : function (
)
{
    return 0;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setLength
 * @param {float} arg0
 */
setLength : function (
float 
)
{
},

/**
 * @method setShearY
 * @param {float} arg0
 */
setShearY : function (
float 
)
{
},

/**
 * @method setTransformMode
 * @param {sp.TransformMode} arg0
 */
setTransformMode : function (
transformmode 
)
{
},

};

/**
 * @class VertexAttachment
 */
sp.VertexAttachment = {

/**
 * @method getVertices
 * @return {sp.Vector<float>}
 */
getVertices : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method getId
 * @return {int}
 */
getId : function (
)
{
    return 0;
},

/**
 * @method getWorldVerticesLength
 * @return {unsigned long}
 */
getWorldVerticesLength : function (
)
{
    return 0;
},

/**
 * @method applyDeform
 * @param {sp.VertexAttachment} arg0
 * @return {bool}
 */
applyDeform : function (
vertexattachment 
)
{
    return false;
},

/**
 * @method setWorldVerticesLength
 * @param {unsigned long} arg0
 */
setWorldVerticesLength : function (
long 
)
{
},

};

/**
 * @class BoundingBoxAttachment
 */
sp.BoundingBoxAttachment = {

};

/**
 * @class ClippingAttachment
 */
sp.ClippingAttachment = {

/**
 * @method setEndSlot
 * @param {sp.SlotData} arg0
 */
setEndSlot : function (
slotdata 
)
{
},

/**
 * @method getEndSlot
 * @return {sp.SlotData}
 */
getEndSlot : function (
)
{
    return sp.SlotData;
},

};

/**
 * @class Color
 */
sp.Color = {

/**
 * @method clamp
 * @return {sp.Color}
 */
clamp : function (
)
{
    return sp.Color;
},

};

/**
 * @class CurveTimeline
 */
sp.CurveTimeline = {

/**
 * @method setCurve
 * @param {unsigned long} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 */
setCurve : function (
long, 
float, 
float, 
float, 
float 
)
{
},

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setLinear
 * @param {unsigned long} arg0
 */
setLinear : function (
long 
)
{
},

/**
 * @method getFrameCount
 * @return {unsigned long}
 */
getFrameCount : function (
)
{
    return 0;
},

/**
 * @method setStepped
 * @param {unsigned long} arg0
 */
setStepped : function (
long 
)
{
},

/**
 * @method getCurvePercent
 * @param {unsigned long} arg0
 * @param {float} arg1
 * @return {float}
 */
getCurvePercent : function (
long, 
float 
)
{
    return 0;
},

/**
 * @method getCurveType
 * @param {unsigned long} arg0
 * @return {float}
 */
getCurveType : function (
long 
)
{
    return 0;
},

};

/**
 * @class ColorTimeline
 */
sp.ColorTimeline = {

/**
 * @method setSlotIndex
 * @param {int} arg0
 */
setSlotIndex : function (
int 
)
{
},

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 * @param {float} arg5
 */
setFrame : function (
int, 
float, 
float, 
float, 
float, 
float 
)
{
},

/**
 * @method getSlotIndex
 * @return {int}
 */
getSlotIndex : function (
)
{
    return 0;
},

/**
 * @method getFrames
 * @return {sp.Vector<float>}
 */
getFrames : function (
)
{
    return sp.Vector<float>;
},

};

/**
 * @class DeformTimeline
 */
sp.DeformTimeline = {

/**
 * @method setSlotIndex
 * @param {int} arg0
 */
setSlotIndex : function (
int 
)
{
},

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method getSlotIndex
 * @return {int}
 */
getSlotIndex : function (
)
{
    return 0;
},

/**
 * @method getAttachment
 * @return {sp.VertexAttachment}
 */
getAttachment : function (
)
{
    return sp.VertexAttachment;
},

/**
 * @method setAttachment
 * @param {sp.VertexAttachment} arg0
 */
setAttachment : function (
vertexattachment 
)
{
},

/**
 * @method getFrames
 * @return {sp.Vector<float>}
 */
getFrames : function (
)
{
    return sp.Vector<float>;
},

};

/**
 * @class DrawOrderTimeline
 */
sp.DrawOrderTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method getFrameCount
 * @return {unsigned long}
 */
getFrameCount : function (
)
{
    return 0;
},

/**
 * @method getFrames
 * @return {sp.Vector<float>}
 */
getFrames : function (
)
{
    return sp.Vector<float>;
},

};

/**
 * @class Event
 */
sp.Event = {

/**
 * @method getFloatValue
 * @return {float}
 */
getFloatValue : function (
)
{
    return 0;
},

/**
 * @method getIntValue
 * @return {int}
 */
getIntValue : function (
)
{
    return 0;
},

/**
 * @method getStringValue
 * @return {sp.String}
 */
getStringValue : function (
)
{
    return sp.String;
},

/**
 * @method getTime
 * @return {float}
 */
getTime : function (
)
{
    return 0;
},

/**
 * @method getBalance
 * @return {float}
 */
getBalance : function (
)
{
    return 0;
},

/**
 * @method setFloatValue
 * @param {float} arg0
 */
setFloatValue : function (
float 
)
{
},

/**
 * @method setIntValue
 * @param {int} arg0
 */
setIntValue : function (
int 
)
{
},

/**
 * @method getVolume
 * @return {float}
 */
getVolume : function (
)
{
    return 0;
},

/**
 * @method setBalance
 * @param {float} arg0
 */
setBalance : function (
float 
)
{
},

/**
 * @method getData
 * @return {sp.EventData}
 */
getData : function (
)
{
    return sp.EventData;
},

/**
 * @method setStringValue
 * @param {sp.String} arg0
 */
setStringValue : function (
string 
)
{
},

/**
 * @method setVolume
 * @param {float} arg0
 */
setVolume : function (
float 
)
{
},

};

/**
 * @class EventData
 */
sp.EventData = {

/**
 * @method getAudioPath
 * @return {sp.String}
 */
getAudioPath : function (
)
{
    return sp.String;
},

/**
 * @method getIntValue
 * @return {int}
 */
getIntValue : function (
)
{
    return 0;
},

/**
 * @method getStringValue
 * @return {sp.String}
 */
getStringValue : function (
)
{
    return sp.String;
},

/**
 * @method getFloatValue
 * @return {float}
 */
getFloatValue : function (
)
{
    return 0;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method setFloatValue
 * @param {float} arg0
 */
setFloatValue : function (
float 
)
{
},

/**
 * @method setIntValue
 * @param {int} arg0
 */
setIntValue : function (
int 
)
{
},

/**
 * @method getVolume
 * @return {float}
 */
getVolume : function (
)
{
    return 0;
},

/**
 * @method setBalance
 * @param {float} arg0
 */
setBalance : function (
float 
)
{
},

/**
 * @method setVolume
 * @param {float} arg0
 */
setVolume : function (
float 
)
{
},

/**
 * @method setStringValue
 * @param {sp.String} arg0
 */
setStringValue : function (
string 
)
{
},

/**
 * @method getBalance
 * @return {float}
 */
getBalance : function (
)
{
    return 0;
},

/**
 * @method setAudioPath
 * @param {sp.String} arg0
 */
setAudioPath : function (
string 
)
{
},

};

/**
 * @class EventTimeline
 */
sp.EventTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {unsigned long} arg0
 * @param {sp.Event} arg1
 */
setFrame : function (
long, 
event 
)
{
},

/**
 * @method getFrameCount
 * @return {unsigned long}
 */
getFrameCount : function (
)
{
    return 0;
},

/**
 * @method getFrames
 * @return {sp.Vector<float>}
 */
getFrames : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method getEvents
 * @return {sp.Vector<sp.Event >}
 */
getEvents : function (
)
{
    return sp.Vector<sp.Event >;
},

};

/**
 * @class IkConstraint
 */
sp.IkConstraint = {

/**
 * @method getMix
 * @return {float}
 */
getMix : function (
)
{
    return 0;
},

/**
 * @method getStretch
 * @return {bool}
 */
getStretch : function (
)
{
    return false;
},

/**
 * @method getCompress
 * @return {bool}
 */
getCompress : function (
)
{
    return false;
},

/**
 * @method setStretch
 * @param {bool} arg0
 */
setStretch : function (
bool 
)
{
},

/**
 * @method getBones
 * @return {sp.Vector<sp.Bone >}
 */
getBones : function (
)
{
    return sp.Vector<sp.Bone >;
},

/**
 * @method setTarget
 * @param {sp.Bone} arg0
 */
setTarget : function (
bone 
)
{
},

/**
 * @method setBendDirection
 * @param {int} arg0
 */
setBendDirection : function (
int 
)
{
},

/**
 * @method update
 */
update : function (
)
{
},

/**
 * @method getTarget
 * @return {sp.Bone}
 */
getTarget : function (
)
{
    return sp.Bone;
},

/**
 * @method setCompress
 * @param {bool} arg0
 */
setCompress : function (
bool 
)
{
},

/**
 * @method getBendDirection
 * @return {int}
 */
getBendDirection : function (
)
{
    return 0;
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method setMix
 * @param {float} arg0
 */
setMix : function (
float 
)
{
},

/**
 * @method getData
 * @return {sp.IkConstraintData}
 */
getData : function (
)
{
    return sp.IkConstraintData;
},

};

/**
 * @class IkConstraintData
 */
sp.IkConstraintData = {

/**
 * @method getMix
 * @return {float}
 */
getMix : function (
)
{
    return 0;
},

/**
 * @method getBendDirection
 * @return {int}
 */
getBendDirection : function (
)
{
    return 0;
},

/**
 * @method setUniform
 * @param {bool} arg0
 */
setUniform : function (
bool 
)
{
},

/**
 * @method setStretch
 * @param {bool} arg0
 */
setStretch : function (
bool 
)
{
},

/**
 * @method getUniform
 * @return {bool}
 */
getUniform : function (
)
{
    return false;
},

/**
 * @method getBones
 * @return {sp.Vector<sp.BoneData >}
 */
getBones : function (
)
{
    return sp.Vector<sp.BoneData >;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method getTarget
 * @return {sp.BoneData}
 */
getTarget : function (
)
{
    return sp.BoneData;
},

/**
 * @method setCompress
 * @param {bool} arg0
 */
setCompress : function (
bool 
)
{
},

/**
 * @method setOrder
 * @param {unsigned long} arg0
 */
setOrder : function (
long 
)
{
},

/**
 * @method getOrder
 * @return {unsigned long}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method getStretch
 * @return {bool}
 */
getStretch : function (
)
{
    return false;
},

/**
 * @method setBendDirection
 * @param {int} arg0
 */
setBendDirection : function (
int 
)
{
},

/**
 * @method setMix
 * @param {float} arg0
 */
setMix : function (
float 
)
{
},

/**
 * @method getCompress
 * @return {bool}
 */
getCompress : function (
)
{
    return false;
},

/**
 * @method setTarget
 * @param {sp.BoneData} arg0
 */
setTarget : function (
bonedata 
)
{
},

};

/**
 * @class IkConstraintTimeline
 */
sp.IkConstraintTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {int} arg3
 * @param {bool} arg4
 * @param {bool} arg5
 */
setFrame : function (
int, 
float, 
float, 
int, 
bool, 
bool 
)
{
},

};

/**
 * @class MeshAttachment
 */
sp.MeshAttachment = {

/**
 * @method setRegionOriginalHeight
 * @param {float} arg0
 */
setRegionOriginalHeight : function (
float 
)
{
},

/**
 * @method setRegionOffsetY
 * @param {float} arg0
 */
setRegionOffsetY : function (
float 
)
{
},

/**
 * @method setRegionOffsetX
 * @param {float} arg0
 */
setRegionOffsetX : function (
float 
)
{
},

/**
 * @method setInheritDeform
 * @param {bool} arg0
 */
setInheritDeform : function (
bool 
)
{
},

/**
 * @method getRegionOriginalWidth
 * @return {float}
 */
getRegionOriginalWidth : function (
)
{
    return 0;
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method setParentMesh
 * @param {sp.MeshAttachment} arg0
 */
setParentMesh : function (
meshattachment 
)
{
},

/**
 * @method setWidth
 * @param {float} arg0
 */
setWidth : function (
float 
)
{
},

/**
 * @method setRegionRotate
 * @param {bool} arg0
 */
setRegionRotate : function (
bool 
)
{
},

/**
 * @method getUVs
 * @return {sp.Vector<float>}
 */
getUVs : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method getRegionHeight
 * @return {float}
 */
getRegionHeight : function (
)
{
    return 0;
},

/**
 * @method getRegionU2
 * @return {float}
 */
getRegionU2 : function (
)
{
    return 0;
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method getPath
 * @return {sp.String}
 */
getPath : function (
)
{
    return sp.String;
},

/**
 * @method setRegionV2
 * @param {float} arg0
 */
setRegionV2 : function (
float 
)
{
},

/**
 * @method setRegionWidth
 * @param {float} arg0
 */
setRegionWidth : function (
float 
)
{
},

/**
 * @method setRegionV
 * @param {float} arg0
 */
setRegionV : function (
float 
)
{
},

/**
 * @method setPath
 * @param {sp.String} arg0
 */
setPath : function (
string 
)
{
},

/**
 * @method setRegionU
 * @param {float} arg0
 */
setRegionU : function (
float 
)
{
},

/**
 * @method applyDeform
 * @param {sp.VertexAttachment} arg0
 * @return {bool}
 */
applyDeform : function (
vertexattachment 
)
{
    return false;
},

/**
 * @method setHullLength
 * @param {int} arg0
 */
setHullLength : function (
int 
)
{
},

/**
 * @method getColor
 * @return {sp.Color}
 */
getColor : function (
)
{
    return sp.Color;
},

/**
 * @method getRegionOriginalHeight
 * @return {float}
 */
getRegionOriginalHeight : function (
)
{
    return 0;
},

/**
 * @method getEdges
 * @return {sp.Vector<unsigned short>}
 */
getEdges : function (
)
{
    return sp.Vector<unsigned short>;
},

/**
 * @method getRegionUVs
 * @return {sp.Vector<float>}
 */
getRegionUVs : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method getRegionV2
 * @return {float}
 */
getRegionV2 : function (
)
{
    return 0;
},

/**
 * @method getRegionWidth
 * @return {float}
 */
getRegionWidth : function (
)
{
    return 0;
},

/**
 * @method setHeight
 * @param {float} arg0
 */
setHeight : function (
float 
)
{
},

/**
 * @method setRegionOriginalWidth
 * @param {float} arg0
 */
setRegionOriginalWidth : function (
float 
)
{
},

/**
 * @method updateUVs
 */
updateUVs : function (
)
{
},

/**
 * @method getInheritDeform
 * @return {bool}
 */
getInheritDeform : function (
)
{
    return false;
},

/**
 * @method setRegionU2
 * @param {float} arg0
 */
setRegionU2 : function (
float 
)
{
},

/**
 * @method getHullLength
 * @return {int}
 */
getHullLength : function (
)
{
    return 0;
},

/**
 * @method setRegionHeight
 * @param {float} arg0
 */
setRegionHeight : function (
float 
)
{
},

/**
 * @method getTriangles
 * @return {sp.Vector<unsigned short>}
 */
getTriangles : function (
)
{
    return sp.Vector<unsigned short>;
},

/**
 * @method getRegionOffsetY
 * @return {float}
 */
getRegionOffsetY : function (
)
{
    return 0;
},

/**
 * @method getRegionOffsetX
 * @return {float}
 */
getRegionOffsetX : function (
)
{
    return 0;
},

/**
 * @method getRegionV
 * @return {float}
 */
getRegionV : function (
)
{
    return 0;
},

/**
 * @method getRegionRotate
 * @return {bool}
 */
getRegionRotate : function (
)
{
    return false;
},

/**
 * @method getParentMesh
 * @return {sp.MeshAttachment}
 */
getParentMesh : function (
)
{
    return sp.MeshAttachment;
},

/**
 * @method getRegionU
 * @return {float}
 */
getRegionU : function (
)
{
    return 0;
},

};

/**
 * @class PathAttachment
 */
sp.PathAttachment = {

/**
 * @method isConstantSpeed
 * @return {bool}
 */
isConstantSpeed : function (
)
{
    return false;
},

/**
 * @method isClosed
 * @return {bool}
 */
isClosed : function (
)
{
    return false;
},

/**
 * @method setConstantSpeed
 * @param {bool} arg0
 */
setConstantSpeed : function (
bool 
)
{
},

/**
 * @method setClosed
 * @param {bool} arg0
 */
setClosed : function (
bool 
)
{
},

/**
 * @method getLengths
 * @return {sp.Vector<float>}
 */
getLengths : function (
)
{
    return sp.Vector<float>;
},

};

/**
 * @class PathConstraint
 */
sp.PathConstraint = {

/**
 * @method setSpacing
 * @param {float} arg0
 */
setSpacing : function (
float 
)
{
},

/**
 * @method setRotateMix
 * @param {float} arg0
 */
setRotateMix : function (
float 
)
{
},

/**
 * @method getRotateMix
 * @return {float}
 */
getRotateMix : function (
)
{
    return 0;
},

/**
 * @method getBones
 * @return {sp.Vector<sp.Bone >}
 */
getBones : function (
)
{
    return sp.Vector<sp.Bone >;
},

/**
 * @method setTarget
 * @param {sp.Slot} arg0
 */
setTarget : function (
slot 
)
{
},

/**
 * @method getTranslateMix
 * @return {float}
 */
getTranslateMix : function (
)
{
    return 0;
},

/**
 * @method update
 */
update : function (
)
{
},

/**
 * @method getTarget
 * @return {sp.Slot}
 */
getTarget : function (
)
{
    return sp.Slot;
},

/**
 * @method getSpacing
 * @return {float}
 */
getSpacing : function (
)
{
    return 0;
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method apply
 */
apply : function (
)
{
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method getData
 * @return {sp.PathConstraintData}
 */
getData : function (
)
{
    return sp.PathConstraintData;
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

/**
 * @method setTranslateMix
 * @param {float} arg0
 */
setTranslateMix : function (
float 
)
{
},

};

/**
 * @class PathConstraintData
 */
sp.PathConstraintData = {

/**
 * @method getOffsetRotation
 * @return {float}
 */
getOffsetRotation : function (
)
{
    return 0;
},

/**
 * @method getPositionMode
 * @return {sp.PositionMode}
 */
getPositionMode : function (
)
{
    return 0;
},

/**
 * @method getTarget
 * @return {sp.SlotData}
 */
getTarget : function (
)
{
    return sp.SlotData;
},

/**
 * @method getSpacingMode
 * @return {sp.SpacingMode}
 */
getSpacingMode : function (
)
{
    return 0;
},

/**
 * @method setSpacing
 * @param {float} arg0
 */
setSpacing : function (
float 
)
{
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method setRotateMode
 * @param {sp.RotateMode} arg0
 */
setRotateMode : function (
rotatemode 
)
{
},

/**
 * @method setRotateMix
 * @param {float} arg0
 */
setRotateMix : function (
float 
)
{
},

/**
 * @method getRotateMix
 * @return {float}
 */
getRotateMix : function (
)
{
    return 0;
},

/**
 * @method setTarget
 * @param {sp.SlotData} arg0
 */
setTarget : function (
slotdata 
)
{
},

/**
 * @method getTranslateMix
 * @return {float}
 */
getTranslateMix : function (
)
{
    return 0;
},

/**
 * @method getSpacing
 * @return {float}
 */
getSpacing : function (
)
{
    return 0;
},

/**
 * @method setOffsetRotation
 * @param {float} arg0
 */
setOffsetRotation : function (
float 
)
{
},

/**
 * @method setOrder
 * @param {int} arg0
 */
setOrder : function (
int 
)
{
},

/**
 * @method getRotateMode
 * @return {sp.RotateMode}
 */
getRotateMode : function (
)
{
    return 0;
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

/**
 * @method setSpacingMode
 * @param {sp.SpacingMode} arg0
 */
setSpacingMode : function (
spacingmode 
)
{
},

/**
 * @method getBones
 * @return {sp.Vector<sp.BoneData >}
 */
getBones : function (
)
{
    return sp.Vector<sp.BoneData >;
},

/**
 * @method setPositionMode
 * @param {sp.PositionMode} arg0
 */
setPositionMode : function (
positionmode 
)
{
},

/**
 * @method setTranslateMix
 * @param {float} arg0
 */
setTranslateMix : function (
float 
)
{
},

};

/**
 * @class PathConstraintMixTimeline
 */
sp.PathConstraintMixTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

};

/**
 * @class PathConstraintPositionTimeline
 */
sp.PathConstraintPositionTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
setFrame : function (
int, 
float, 
float 
)
{
},

};

/**
 * @class PathConstraintSpacingTimeline
 */
sp.PathConstraintSpacingTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

};

/**
 * @class PointAttachment
 */
sp.PointAttachment = {

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

};

/**
 * @class RegionAttachment
 */
sp.RegionAttachment = {

/**
 * @method setRegionOriginalHeight
 * @param {float} arg0
 */
setRegionOriginalHeight : function (
float 
)
{
},

/**
 * @method setRegionOffsetY
 * @param {float} arg0
 */
setRegionOffsetY : function (
float 
)
{
},

/**
 * @method setRegionOffsetX
 * @param {float} arg0
 */
setRegionOffsetX : function (
float 
)
{
},

/**
 * @method getRegionOriginalWidth
 * @return {float}
 */
getRegionOriginalWidth : function (
)
{
    return 0;
},

/**
 * @method setUVs
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {bool} arg4
 */
setUVs : function (
float, 
float, 
float, 
float, 
bool 
)
{
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getRotation
 * @return {float}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method setWidth
 * @param {float} arg0
 */
setWidth : function (
float 
)
{
},

/**
 * @method setRegionWidth
 * @param {float} arg0
 */
setRegionWidth : function (
float 
)
{
},

/**
 * @method getUVs
 * @return {sp.Vector<float>}
 */
getUVs : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method getRegionHeight
 * @return {float}
 */
getRegionHeight : function (
)
{
    return 0;
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method getPath
 * @return {sp.String}
 */
getPath : function (
)
{
    return sp.String;
},

/**
 * @method setRotation
 * @param {float} arg0
 */
setRotation : function (
float 
)
{
},

/**
 * @method setPath
 * @param {sp.String} arg0
 */
setPath : function (
string 
)
{
},

/**
 * @method getRegionWidth
 * @return {float}
 */
getRegionWidth : function (
)
{
    return 0;
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method setRegionOriginalWidth
 * @param {float} arg0
 */
setRegionOriginalWidth : function (
float 
)
{
},

/**
 * @method getColor
 * @return {sp.Color}
 */
getColor : function (
)
{
    return sp.Color;
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method setHeight
 * @param {float} arg0
 */
setHeight : function (
float 
)
{
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method getOffset
 * @return {sp.Vector<float>}
 */
getOffset : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method setRegionHeight
 * @param {float} arg0
 */
setRegionHeight : function (
float 
)
{
},

/**
 * @method updateOffset
 */
updateOffset : function (
)
{
},

/**
 * @method getRegionOriginalHeight
 * @return {float}
 */
getRegionOriginalHeight : function (
)
{
    return 0;
},

/**
 * @method getRegionOffsetY
 * @return {float}
 */
getRegionOffsetY : function (
)
{
    return 0;
},

/**
 * @method getRegionOffsetX
 * @return {float}
 */
getRegionOffsetX : function (
)
{
    return 0;
},

};

/**
 * @class RotateTimeline
 */
sp.RotateTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
setFrame : function (
int, 
float, 
float 
)
{
},

/**
 * @method getFrames
 * @return {sp.Vector<float>}
 */
getFrames : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method setBoneIndex
 * @param {int} arg0
 */
setBoneIndex : function (
int 
)
{
},

/**
 * @method getBoneIndex
 * @return {int}
 */
getBoneIndex : function (
)
{
    return 0;
},

};

/**
 * @class TranslateTimeline
 */
sp.TranslateTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 */
setFrame : function (
int, 
float, 
float, 
float 
)
{
},

};

/**
 * @class ScaleTimeline
 */
sp.ScaleTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

};

/**
 * @class ShearTimeline
 */
sp.ShearTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

};

/**
 * @class Skeleton
 */
sp.Skeleton = {

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getSkin
 * @return {sp.Skin}
 */
getSkin : function (
)
{
    return sp.Skin;
},

/**
 * @method getX
 * @return {float}
 */
getX : function (
)
{
    return 0;
},

/**
 * @method findTransformConstraint
 * @param {sp.String} arg0
 * @return {sp.TransformConstraint}
 */
findTransformConstraint : function (
string 
)
{
    return sp.TransformConstraint;
},

/**
 * @method setAttachment
 * @param {sp.String} arg0
 * @param {sp.String} arg1
 */
setAttachment : function (
string, 
string 
)
{
},

/**
 * @method findIkConstraint
 * @param {sp.String} arg0
 * @return {sp.IkConstraint}
 */
findIkConstraint : function (
string 
)
{
    return sp.IkConstraint;
},

/**
 * @method setBonesToSetupPose
 */
setBonesToSetupPose : function (
)
{
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method findBoneIndex
 * @param {sp.String} arg0
 * @return {int}
 */
findBoneIndex : function (
string 
)
{
    return 0;
},

/**
 * @method setSlotsToSetupPose
 */
setSlotsToSetupPose : function (
)
{
},

/**
 * @method getDrawOrder
 * @return {sp.Vector<sp.Slot >}
 */
getDrawOrder : function (
)
{
    return sp.Vector<sp.Slot >;
},

/**
 * @method getTime
 * @return {float}
 */
getTime : function (
)
{
    return 0;
},

/**
 * @method getColor
 * @return {sp.Color}
 */
getColor : function (
)
{
    return sp.Color;
},

/**
 * @method getIkConstraints
 * @return {sp.Vector<sp.IkConstraint >}
 */
getIkConstraints : function (
)
{
    return sp.Vector<sp.IkConstraint >;
},

/**
 * @method getData
 * @return {sp.SkeletonData}
 */
getData : function (
)
{
    return sp.SkeletonData;
},

/**
 * @method getUpdateCacheList
 * @return {sp.Vector<sp.Updatable >}
 */
getUpdateCacheList : function (
)
{
    return sp.Vector<sp.Updatable >;
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method getPathConstraints
 * @return {sp.Vector<sp.PathConstraint >}
 */
getPathConstraints : function (
)
{
    return sp.Vector<sp.PathConstraint >;
},

/**
 * @method getSlots
 * @return {sp.Vector<sp.Slot >}
 */
getSlots : function (
)
{
    return sp.Vector<sp.Slot >;
},

/**
 * @method printUpdateCache
 */
printUpdateCache : function (
)
{
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method getAttachment
* @param {int|sp.String} int
* @param {sp.String|sp.String} string
* @return {sp.Attachment|sp.Attachment}
*/
getAttachment : function(
string,
string 
)
{
    return sp.Attachment;
},

/**
 * @method setTime
 * @param {float} arg0
 */
setTime : function (
float 
)
{
},

/**
 * @method setPosition
 * @param {float} arg0
 * @param {float} arg1
 */
setPosition : function (
float, 
float 
)
{
},

/**
 * @method setX
 * @param {float} arg0
 */
setX : function (
float 
)
{
},

/**
 * @method setY
 * @param {float} arg0
 */
setY : function (
float 
)
{
},

/**
 * @method findBone
 * @param {sp.String} arg0
 * @return {sp.Bone}
 */
findBone : function (
string 
)
{
    return sp.Bone;
},

/**
 * @method getY
 * @return {float}
 */
getY : function (
)
{
    return 0;
},

/**
 * @method getBones
 * @return {sp.Vector<sp.Bone >}
 */
getBones : function (
)
{
    return sp.Vector<sp.Bone >;
},

/**
 * @method getRootBone
 * @return {sp.Bone}
 */
getRootBone : function (
)
{
    return sp.Bone;
},

/**
 * @method updateCache
 */
updateCache : function (
)
{
},

/**
 * @method findSlotIndex
 * @param {sp.String} arg0
 * @return {int}
 */
findSlotIndex : function (
string 
)
{
    return 0;
},

/**
 * @method getTransformConstraints
 * @return {sp.Vector<sp.TransformConstraint >}
 */
getTransformConstraints : function (
)
{
    return sp.Vector<sp.TransformConstraint >;
},

/**
 * @method setSkin
* @param {sp.Skin|sp.String} skin
*/
setSkin : function(
string 
)
{
},

/**
 * @method findSlot
 * @param {sp.String} arg0
 * @return {sp.Slot}
 */
findSlot : function (
string 
)
{
    return sp.Slot;
},

/**
 * @method updateWorldTransform
 */
updateWorldTransform : function (
)
{
},

/**
 * @method findPathConstraint
 * @param {sp.String} arg0
 * @return {sp.PathConstraint}
 */
findPathConstraint : function (
string 
)
{
    return sp.PathConstraint;
},

};

/**
 * @class SkeletonBounds
 */
sp.SkeletonBounds = {

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method aabbintersectsSegment
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @return {bool}
 */
aabbintersectsSegment : function (
float, 
float, 
float, 
float 
)
{
    return false;
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method aabbcontainsPoint
 * @param {float} arg0
 * @param {float} arg1
 * @return {bool}
 */
aabbcontainsPoint : function (
float, 
float 
)
{
    return false;
},

/**
 * @method intersectsSegment
* @param {sp.Polygon|float} polygon
* @param {float|float} float
* @param {float|float} float
* @param {float|float} float
* @param {float} float
* @return {bool|sp.BoundingBoxAttachment}
*/
intersectsSegment : function(
polygon,
float,
float,
float,
float 
)
{
    return false;
},

/**
 * @method containsPoint
* @param {float|sp.Polygon} float
* @param {float|float} float
* @param {float} float
* @return {sp.BoundingBoxAttachment|bool}
*/
containsPoint : function(
polygon,
float,
float 
)
{
    return false;
},

/**
 * @method getPolygon
 * @param {sp.BoundingBoxAttachment} arg0
 * @return {sp.Polygon}
 */
getPolygon : function (
boundingboxattachment 
)
{
    return sp.Polygon;
},

};

/**
 * @class Polygon
 */
sp.Polygon = {

};

/**
 * @class SkeletonData
 */
sp.SkeletonData = {

/**
 * @method findEvent
 * @param {sp.String} arg0
 * @return {sp.EventData}
 */
findEvent : function (
string 
)
{
    return sp.EventData;
},

/**
 * @method findAnimation
 * @param {sp.String} arg0
 * @return {sp.Animation}
 */
findAnimation : function (
string 
)
{
    return sp.Animation;
},

/**
 * @method getWidth
 * @return {float}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method findTransformConstraint
 * @param {sp.String} arg0
 * @return {sp.TransformConstraintData}
 */
findTransformConstraint : function (
string 
)
{
    return sp.TransformConstraintData;
},

/**
 * @method setFps
 * @param {float} arg0
 */
setFps : function (
float 
)
{
},

/**
 * @method findIkConstraint
 * @param {sp.String} arg0
 * @return {sp.IkConstraintData}
 */
findIkConstraint : function (
string 
)
{
    return sp.IkConstraintData;
},

/**
 * @method getFps
 * @return {float}
 */
getFps : function (
)
{
    return 0;
},

/**
 * @method getSkins
 * @return {sp.Vector<sp.Skin >}
 */
getSkins : function (
)
{
    return sp.Vector<sp.Skin >;
},

/**
 * @method setWidth
 * @param {float} arg0
 */
setWidth : function (
float 
)
{
},

/**
 * @method setVersion
 * @param {sp.String} arg0
 */
setVersion : function (
string 
)
{
},

/**
 * @method setHash
 * @param {sp.String} arg0
 */
setHash : function (
string 
)
{
},

/**
 * @method findBoneIndex
 * @param {sp.String} arg0
 * @return {int}
 */
findBoneIndex : function (
string 
)
{
    return 0;
},

/**
 * @method getDefaultSkin
 * @return {sp.Skin}
 */
getDefaultSkin : function (
)
{
    return sp.Skin;
},

/**
 * @method getHeight
 * @return {float}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method setDefaultSkin
 * @param {sp.Skin} arg0
 */
setDefaultSkin : function (
skin 
)
{
},

/**
 * @method getHash
 * @return {sp.String}
 */
getHash : function (
)
{
    return sp.String;
},

/**
 * @method getAnimations
 * @return {sp.Vector<sp.Animation >}
 */
getAnimations : function (
)
{
    return sp.Vector<sp.Animation >;
},

/**
 * @method setImagesPath
 * @param {sp.String} arg0
 */
setImagesPath : function (
string 
)
{
},

/**
 * @method getIkConstraints
 * @return {sp.Vector<sp.IkConstraintData >}
 */
getIkConstraints : function (
)
{
    return sp.Vector<sp.IkConstraintData >;
},

/**
 * @method getImagesPath
 * @return {sp.String}
 */
getImagesPath : function (
)
{
    return sp.String;
},

/**
 * @method getEvents
 * @return {sp.Vector<sp.EventData >}
 */
getEvents : function (
)
{
    return sp.Vector<sp.EventData >;
},

/**
 * @method findBone
 * @param {sp.String} arg0
 * @return {sp.BoneData}
 */
findBone : function (
string 
)
{
    return sp.BoneData;
},

/**
 * @method setName
 * @param {sp.String} arg0
 */
setName : function (
string 
)
{
},

/**
 * @method getPathConstraints
 * @return {sp.Vector<sp.PathConstraintData >}
 */
getPathConstraints : function (
)
{
    return sp.Vector<sp.PathConstraintData >;
},

/**
 * @method getAudioPath
 * @return {sp.String}
 */
getAudioPath : function (
)
{
    return sp.String;
},

/**
 * @method getVersion
 * @return {sp.String}
 */
getVersion : function (
)
{
    return sp.String;
},

/**
 * @method setHeight
 * @param {float} arg0
 */
setHeight : function (
float 
)
{
},

/**
 * @method getSlots
 * @return {sp.Vector<sp.SlotData >}
 */
getSlots : function (
)
{
    return sp.Vector<sp.SlotData >;
},

/**
 * @method findSkin
 * @param {sp.String} arg0
 * @return {sp.Skin}
 */
findSkin : function (
string 
)
{
    return sp.Skin;
},

/**
 * @method getBones
 * @return {sp.Vector<sp.BoneData >}
 */
getBones : function (
)
{
    return sp.Vector<sp.BoneData >;
},

/**
 * @method findPathConstraintIndex
 * @param {sp.String} arg0
 * @return {int}
 */
findPathConstraintIndex : function (
string 
)
{
    return 0;
},

/**
 * @method findSlotIndex
 * @param {sp.String} arg0
 * @return {int}
 */
findSlotIndex : function (
string 
)
{
    return 0;
},

/**
 * @method getTransformConstraints
 * @return {sp.Vector<sp.TransformConstraintData >}
 */
getTransformConstraints : function (
)
{
    return sp.Vector<sp.TransformConstraintData >;
},

/**
 * @method findSlot
 * @param {sp.String} arg0
 * @return {sp.SlotData}
 */
findSlot : function (
string 
)
{
    return sp.SlotData;
},

/**
 * @method setAudioPath
 * @param {sp.String} arg0
 */
setAudioPath : function (
string 
)
{
},

/**
 * @method findPathConstraint
 * @param {sp.String} arg0
 * @return {sp.PathConstraintData}
 */
findPathConstraint : function (
string 
)
{
    return sp.PathConstraintData;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

};

/**
 * @class Skin
 */
sp.Skin = {

/**
 * @method findNamesForSlot
 * @param {unsigned long} arg0
 * @param {sp.Vector<sp.String>} arg1
 */
findNamesForSlot : function (
long, 
array 
)
{
},

/**
 * @method removeAttachment
 * @param {unsigned long} arg0
 * @param {sp.String} arg1
 */
removeAttachment : function (
long, 
string 
)
{
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method addAttachment
 * @param {unsigned long} arg0
 * @param {sp.String} arg1
 * @param {sp.Attachment} arg2
 */
addAttachment : function (
long, 
string, 
attachment 
)
{
},

/**
 * @method getAttachment
 * @param {unsigned long} arg0
 * @param {sp.String} arg1
 * @return {sp.Attachment}
 */
getAttachment : function (
long, 
string 
)
{
    return sp.Attachment;
},

/**
 * @method findAttachmentsForSlot
 * @param {unsigned long} arg0
 * @param {sp.Vector<sp.Attachment >} arg1
 */
findAttachmentsForSlot : function (
long, 
array 
)
{
},

};

/**
 * @class Slot
 */
sp.Slot = {

/**
 * @method getBone
 * @return {sp.Bone}
 */
getBone : function (
)
{
    return sp.Bone;
},

/**
 * @method setAttachmentTime
 * @param {float} arg0
 */
setAttachmentTime : function (
float 
)
{
},

/**
 * @method getDarkColor
 * @return {sp.Color}
 */
getDarkColor : function (
)
{
    return sp.Color;
},

/**
 * @method getColor
 * @return {sp.Color}
 */
getColor : function (
)
{
    return sp.Color;
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method getAttachment
 * @return {sp.Attachment}
 */
getAttachment : function (
)
{
    return sp.Attachment;
},

/**
 * @method getAttachmentTime
 * @return {float}
 */
getAttachmentTime : function (
)
{
    return 0;
},

/**
 * @method setAttachment
 * @param {sp.Attachment} arg0
 */
setAttachment : function (
attachment 
)
{
},

/**
 * @method getAttachmentVertices
 * @return {sp.Vector<float>}
 */
getAttachmentVertices : function (
)
{
    return sp.Vector<float>;
},

/**
 * @method hasDarkColor
 * @return {bool}
 */
hasDarkColor : function (
)
{
    return false;
},

/**
 * @method getSkeleton
 * @return {sp.Skeleton}
 */
getSkeleton : function (
)
{
    return sp.Skeleton;
},

/**
 * @method getData
 * @return {sp.SlotData}
 */
getData : function (
)
{
    return sp.SlotData;
},

};

/**
 * @class SlotData
 */
sp.SlotData = {

/**
 * @method getIndex
 * @return {int}
 */
getIndex : function (
)
{
    return 0;
},

/**
 * @method getDarkColor
 * @return {sp.Color}
 */
getDarkColor : function (
)
{
    return sp.Color;
},

/**
 * @method getAttachmentName
 * @return {sp.String}
 */
getAttachmentName : function (
)
{
    return sp.String;
},

/**
 * @method getColor
 * @return {sp.Color}
 */
getColor : function (
)
{
    return sp.Color;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method setBlendMode
 * @param {sp.BlendMode} arg0
 */
setBlendMode : function (
blendmode 
)
{
},

/**
 * @method getBlendMode
 * @return {sp.BlendMode}
 */
getBlendMode : function (
)
{
    return 0;
},

/**
 * @method hasDarkColor
 * @return {bool}
 */
hasDarkColor : function (
)
{
    return false;
},

/**
 * @method setHasDarkColor
 * @param {bool} arg0
 */
setHasDarkColor : function (
bool 
)
{
},

/**
 * @method setAttachmentName
 * @param {sp.String} arg0
 */
setAttachmentName : function (
string 
)
{
},

/**
 * @method getBoneData
 * @return {sp.BoneData}
 */
getBoneData : function (
)
{
    return sp.BoneData;
},

};

/**
 * @class TransformConstraint
 */
sp.TransformConstraint = {

/**
 * @method getScaleMix
 * @return {float}
 */
getScaleMix : function (
)
{
    return 0;
},

/**
 * @method setRotateMix
 * @param {float} arg0
 */
setRotateMix : function (
float 
)
{
},

/**
 * @method getRotateMix
 * @return {float}
 */
getRotateMix : function (
)
{
    return 0;
},

/**
 * @method getBones
 * @return {sp.Vector<sp.Bone >}
 */
getBones : function (
)
{
    return sp.Vector<sp.Bone >;
},

/**
 * @method setTarget
 * @param {sp.Bone} arg0
 */
setTarget : function (
bone 
)
{
},

/**
 * @method getTranslateMix
 * @return {float}
 */
getTranslateMix : function (
)
{
    return 0;
},

/**
 * @method setShearMix
 * @param {float} arg0
 */
setShearMix : function (
float 
)
{
},

/**
 * @method update
 */
update : function (
)
{
},

/**
 * @method getTarget
 * @return {sp.Bone}
 */
getTarget : function (
)
{
    return sp.Bone;
},

/**
 * @method setScaleMix
 * @param {float} arg0
 */
setScaleMix : function (
float 
)
{
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method getShearMix
 * @return {float}
 */
getShearMix : function (
)
{
    return 0;
},

/**
 * @method apply
 */
apply : function (
)
{
},

/**
 * @method getData
 * @return {sp.TransformConstraintData}
 */
getData : function (
)
{
    return sp.TransformConstraintData;
},

/**
 * @method setTranslateMix
 * @param {float} arg0
 */
setTranslateMix : function (
float 
)
{
},

};

/**
 * @class TransformConstraintData
 */
sp.TransformConstraintData = {

/**
 * @method getOffsetRotation
 * @return {float}
 */
getOffsetRotation : function (
)
{
    return 0;
},

/**
 * @method getRotateMix
 * @return {float}
 */
getRotateMix : function (
)
{
    return 0;
},

/**
 * @method isLocal
 * @return {bool}
 */
isLocal : function (
)
{
    return false;
},

/**
 * @method getBones
 * @return {sp.Vector<sp.BoneData >}
 */
getBones : function (
)
{
    return sp.Vector<sp.BoneData >;
},

/**
 * @method getName
 * @return {sp.String}
 */
getName : function (
)
{
    return sp.String;
},

/**
 * @method getTranslateMix
 * @return {float}
 */
getTranslateMix : function (
)
{
    return 0;
},

/**
 * @method getTarget
 * @return {sp.BoneData}
 */
getTarget : function (
)
{
    return sp.BoneData;
},

/**
 * @method getOffsetScaleX
 * @return {float}
 */
getOffsetScaleX : function (
)
{
    return 0;
},

/**
 * @method getOffsetScaleY
 * @return {float}
 */
getOffsetScaleY : function (
)
{
    return 0;
},

/**
 * @method getOffsetShearY
 * @return {float}
 */
getOffsetShearY : function (
)
{
    return 0;
},

/**
 * @method getOrder
 * @return {int}
 */
getOrder : function (
)
{
    return 0;
},

/**
 * @method getOffsetX
 * @return {float}
 */
getOffsetX : function (
)
{
    return 0;
},

/**
 * @method getShearMix
 * @return {float}
 */
getShearMix : function (
)
{
    return 0;
},

/**
 * @method getOffsetY
 * @return {float}
 */
getOffsetY : function (
)
{
    return 0;
},

/**
 * @method getScaleMix
 * @return {float}
 */
getScaleMix : function (
)
{
    return 0;
},

/**
 * @method isRelative
 * @return {bool}
 */
isRelative : function (
)
{
    return false;
},

};

/**
 * @class TransformConstraintTimeline
 */
sp.TransformConstraintTimeline = {

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {unsigned long} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 * @param {float} arg5
 */
setFrame : function (
long, 
float, 
float, 
float, 
float, 
float 
)
{
},

};

/**
 * @class TwoColorTimeline
 */
sp.TwoColorTimeline = {

/**
 * @method setSlotIndex
 * @param {int} arg0
 */
setSlotIndex : function (
int 
)
{
},

/**
 * @method getPropertyId
 * @return {int}
 */
getPropertyId : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @param {float} arg4
 * @param {float} arg5
 * @param {float} arg6
 * @param {float} arg7
 * @param {float} arg8
 */
setFrame : function (
int, 
float, 
float, 
float, 
float, 
float, 
float, 
float, 
float 
)
{
},

/**
 * @method getSlotIndex
 * @return {int}
 */
getSlotIndex : function (
)
{
    return 0;
},

};

/**
 * @class VertexEffect
 */
sp.VertexEffect = {

};

/**
 * @class JitterVertexEffect
 */
sp.JitterVertexEffect = {

/**
 * @method setJitterX
 * @param {float} arg0
 */
setJitterX : function (
float 
)
{
},

/**
 * @method setJitterY
 * @param {float} arg0
 */
setJitterY : function (
float 
)
{
},

/**
 * @method getJitterX
 * @return {float}
 */
getJitterX : function (
)
{
    return 0;
},

/**
 * @method getJitterY
 * @return {float}
 */
getJitterY : function (
)
{
    return 0;
},

};

/**
 * @class SwirlVertexEffect
 */
sp.SwirlVertexEffect = {

/**
 * @method setRadius
 * @param {float} arg0
 */
setRadius : function (
float 
)
{
},

/**
 * @method getAngle
 * @return {float}
 */
getAngle : function (
)
{
    return 0;
},

/**
 * @method getCenterY
 * @return {float}
 */
getCenterY : function (
)
{
    return 0;
},

/**
 * @method getCenterX
 * @return {float}
 */
getCenterX : function (
)
{
    return 0;
},

/**
 * @method setAngle
 * @param {float} arg0
 */
setAngle : function (
float 
)
{
},

/**
 * @method setWorldX
 * @param {float} arg0
 */
setWorldX : function (
float 
)
{
},

/**
 * @method setWorldY
 * @param {float} arg0
 */
setWorldY : function (
float 
)
{
},

/**
 * @method getWorldY
 * @return {float}
 */
getWorldY : function (
)
{
    return 0;
},

/**
 * @method getWorldX
 * @return {float}
 */
getWorldX : function (
)
{
    return 0;
},

/**
 * @method setCenterY
 * @param {float} arg0
 */
setCenterY : function (
float 
)
{
},

/**
 * @method setCenterX
 * @param {float} arg0
 */
setCenterX : function (
float 
)
{
},

/**
 * @method getRadius
 * @return {float}
 */
getRadius : function (
)
{
    return 0;
},

};

/**
 * @class SkeletonRenderer
 */
sp.Skeleton = {

/**
 * @method setTimeScale
 * @param {float} arg0
 */
setTimeScale : function (
float 
)
{
},

/**
 * @method getDebugSlotsEnabled
 * @return {bool}
 */
getDebugSlotsEnabled : function (
)
{
    return false;
},

/**
 * @method setAttachment
* @param {String|String} str
* @param {char|String} char
* @return {bool|bool}
*/
setAttachment : function(
str,
str 
)
{
    return false;
},

/**
 * @method setBonesToSetupPose
 */
setBonesToSetupPose : function (
)
{
},

/**
 * @method setDebugSlotsEnabled
 * @param {bool} arg0
 */
setDebugSlotsEnabled : function (
bool 
)
{
},

/**
 * @method initWithJsonFile
* @param {String|String} str
* @param {String|sp.Atlas} str
* @param {float|float} float
*/
initWithJsonFile : function(
str,
atlas,
float 
)
{
},

/**
 * @method setSlotsToSetupPose
 */
setSlotsToSetupPose : function (
)
{
},

/**
 * @method initWithBinaryFile
* @param {String|String} str
* @param {String|sp.Atlas} str
* @param {float|float} float
*/
initWithBinaryFile : function(
str,
atlas,
float 
)
{
},

/**
 * @method setToSetupPose
 */
setToSetupPose : function (
)
{
},

/**
 * @method setDebugMeshesEnabled
 * @param {bool} arg0
 */
setDebugMeshesEnabled : function (
bool 
)
{
},

/**
 * @method isTwoColorTint
 * @return {bool}
 */
isTwoColorTint : function (
)
{
    return false;
},

/**
 * @method initWithSkeleton
 * @param {sp.Skeleton} arg0
 * @param {bool} arg1
 * @param {bool} arg2
 * @param {bool} arg3
 */
initWithSkeleton : function (
skeleton, 
bool, 
bool, 
bool 
)
{
},

/**
 * @method getBlendFunc
 * @return {cc.BlendFunc}
 */
getBlendFunc : function (
)
{
    return cc.BlendFunc;
},

/**
 * @method getAttachment
 * @param {String} arg0
 * @param {String} arg1
 * @return {sp.Attachment}
 */
getAttachment : function (
str, 
str 
)
{
    return sp.Attachment;
},

/**
 * @method setSlotsRange
 * @param {int} arg0
 * @param {int} arg1
 */
setSlotsRange : function (
int, 
int 
)
{
},

/**
 * @method initialize
 */
initialize : function (
)
{
},

/**
 * @method setDebugBonesEnabled
 * @param {bool} arg0
 */
setDebugBonesEnabled : function (
bool 
)
{
},

/**
 * @method getDebugBonesEnabled
 * @return {bool}
 */
getDebugBonesEnabled : function (
)
{
    return false;
},

/**
 * @method getTimeScale
 * @return {float}
 */
getTimeScale : function (
)
{
    return 0;
},

/**
 * @method setTwoColorTint
 * @param {bool} arg0
 */
setTwoColorTint : function (
bool 
)
{
},

/**
 * @method getDebugMeshesEnabled
 * @return {bool}
 */
getDebugMeshesEnabled : function (
)
{
    return false;
},

/**
 * @method setBlendFunc
 * @param {cc.BlendFunc} arg0
 */
setBlendFunc : function (
blendfunc 
)
{
},

/**
 * @method setVertexEffect
 * @param {sp.VertexEffect} arg0
 */
setVertexEffect : function (
vertexeffect 
)
{
},

/**
 * @method setSkin
* @param {char|String} char
*/
setSkin : function(
str 
)
{
},

/**
 * @method findSlot
 * @param {String} arg0
 * @return {sp.Slot}
 */
findSlot : function (
str 
)
{
    return sp.Slot;
},

/**
 * @method updateWorldTransform
 */
updateWorldTransform : function (
)
{
},

/**
 * @method getSkeleton
 * @return {sp.Skeleton}
 */
getSkeleton : function (
)
{
    return sp.Skeleton;
},

/**
 * @method findBone
 * @param {String} arg0
 * @return {sp.Bone}
 */
findBone : function (
str 
)
{
    return sp.Bone;
},

/**
 * @method drawDebug
 * @param {cc.Renderer} arg0
 * @param {mat4_object} arg1
 * @param {unsigned int} arg2
 */
drawDebug : function (
renderer, 
mat4, 
int 
)
{
},

/**
 * @method destroyScratchBuffers
 */
destroyScratchBuffers : function (
)
{
},

/**
 * @method SkeletonRenderer
 * @constructor
* @param {sp.Skeleton|sp.SkeletonData|String|String} skeleton
* @param {bool|bool|sp.Atlas|String} bool
* @param {bool|float|float} bool
* @param {bool} bool
*/
SkeletonRenderer : function(
skeleton,
bool,
bool,
bool 
)
{
},

};

/**
 * @class SkeletonAnimation
 */
sp.SkeletonAnimation = {

/**
 * @method setAnimation
 * @param {int} arg0
 * @param {String} arg1
 * @param {bool} arg2
 * @return {sp.TrackEntry}
 */
setAnimation : function (
int, 
str, 
bool 
)
{
    return sp.TrackEntry;
},

/**
 * @method findAnimation
 * @param {String} arg0
 * @return {sp.Animation}
 */
findAnimation : function (
str 
)
{
    return sp.Animation;
},

/**
 * @method setMix
 * @param {String} arg0
 * @param {String} arg1
 * @param {float} arg2
 */
setMix : function (
str, 
str, 
float 
)
{
},

/**
 * @method addEmptyAnimation
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @return {sp.TrackEntry}
 */
addEmptyAnimation : function (
int, 
float, 
float 
)
{
    return sp.TrackEntry;
},

/**
 * @method setDisposeListener
 * @param {function} arg0
 */
setDisposeListener : function (
func 
)
{
},

/**
 * @method setAnimationStateData
 * @param {sp.AnimationStateData} arg0
 */
setAnimationStateData : function (
animationstatedata 
)
{
},

/**
 * @method setEndListener
 * @param {function} arg0
 */
setEndListener : function (
func 
)
{
},

/**
 * @method getState
 * @return {sp.AnimationState}
 */
getState : function (
)
{
    return sp.AnimationState;
},

/**
 * @method setCompleteListener
 * @param {function} arg0
 */
setCompleteListener : function (
func 
)
{
},

/**
 * @method getCurrent
 * @return {sp.TrackEntry}
 */
getCurrent : function (
)
{
    return sp.TrackEntry;
},

/**
 * @method setEventListener
 * @param {function} arg0
 */
setEventListener : function (
func 
)
{
},

/**
 * @method setEmptyAnimation
 * @param {int} arg0
 * @param {float} arg1
 * @return {sp.TrackEntry}
 */
setEmptyAnimation : function (
int, 
float 
)
{
    return sp.TrackEntry;
},

/**
 * @method clearTrack
 */
clearTrack : function (
)
{
},

/**
 * @method setInterruptListener
 * @param {function} arg0
 */
setInterruptListener : function (
func 
)
{
},

/**
 * @method addAnimation
 * @param {int} arg0
 * @param {String} arg1
 * @param {bool} arg2
 * @param {float} arg3
 * @return {sp.TrackEntry}
 */
addAnimation : function (
int, 
str, 
bool, 
float 
)
{
    return sp.TrackEntry;
},

/**
 * @method setEmptyAnimations
 * @param {float} arg0
 */
setEmptyAnimations : function (
float 
)
{
},

/**
 * @method clearTracks
 */
clearTracks : function (
)
{
},

/**
 * @method setStartListener
 * @param {function} arg0
 */
setStartListener : function (
func 
)
{
},

/**
 * @method createWithBinaryFile
* @param {String|String} str
* @param {String|sp.Atlas} str
* @param {float|float} float
* @return {sp.SkeletonAnimation|sp.SkeletonAnimation}
*/
createWithBinaryFile : function(
str,
atlas,
float 
)
{
    return sp.SkeletonAnimation;
},

/**
 * @method create
 * @return {sp.SkeletonAnimation}
 */
create : function (
)
{
    return sp.SkeletonAnimation;
},

/**
 * @method createWithJsonFile
* @param {String|String} str
* @param {String|sp.Atlas} str
* @param {float|float} float
* @return {sp.SkeletonAnimation|sp.SkeletonAnimation}
*/
createWithJsonFile : function(
str,
atlas,
float 
)
{
    return sp.SkeletonAnimation;
},

/**
 * @method SkeletonAnimation
 * @constructor
 */
SkeletonAnimation : function (
)
{
},

};
