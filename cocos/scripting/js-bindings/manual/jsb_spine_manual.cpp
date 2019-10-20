//
//  jsb_spine_manual.cpp
//  cocos2d_js_bindings
//
//  Created by James Chen on 6/14/17.
//
//

#include "jsb_spine_manual.hpp"
#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"
#include "cocos/scripting/js-bindings/manual/jsb_conversions.hpp"
#include "cocos/scripting/js-bindings/manual/jsb_global.h"
#include "cocos/scripting/js-bindings/manual/jsb_helper.hpp"
#include "cocos/scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.hpp"

#include "cocos2d.h"
#include "cocos/editor-support/spine/spine.h"

using namespace cocos2d;

// TrackEntry registration

se::Class* __jsb_spine_TrackEntry_class = nullptr;
se::Object* __jsb_spine_TrackEntry_proto = nullptr;

static bool jsb_spine_TrackEntry_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spTrackEntry)", s.nativeThisObject());
    return true;
}
SE_BIND_FINALIZE_FUNC(jsb_spine_TrackEntry_finalize)

static bool jsb_spine_TrackEntry_constructor(se::State& s)
{
    assert(false);
    return true;
}
SE_BIND_CTOR(jsb_spine_TrackEntry_constructor, __jsb_spine_TrackEntry_class, jsb_spine_TrackEntry_finalize)

static bool jsb_spine_TrackEntry_get_mixingFrom(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_mixingFrom : Invalid Native Object");
    if (cobj->mixingFrom)
    {
        bool ok = sptrackentry_to_seval(cobj->mixingFrom, &s.rval());
        SE_PRECONDITION2(ok, false, "Converting track entry failed!");
        return true;
    }
    s.rval().setNull();
    return true;
}
SE_BIND_FUNC(jsb_spine_TrackEntry_get_mixingFrom)

static bool jsb_spine_TrackEntry_get_next(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_next : Invalid Native Object");
    if (cobj->next)
    {
        bool ok = sptrackentry_to_seval(cobj->next, &s.rval());
        SE_PRECONDITION2(ok, false, "Converting track entry failed!");
        return true;
    }
    s.rval().setNull();
    return true;
}
SE_BIND_FUNC(jsb_spine_TrackEntry_get_next)

static bool jsb_spine_TrackEntry_get_trackIndex(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_trackIndex : Invalid Native Object");
    s.rval().setInt32(cobj->trackIndex);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_trackIndex)

static bool jsb_spine_TrackEntry_get_loop(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_loop : Invalid Native Object");
    s.rval().setInt32(cobj->loop);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_loop)

static bool jsb_spine_TrackEntry_get_eventThreshold(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_eventThreshold : Invalid Native Object");
    s.rval().setFloat(cobj->eventThreshold);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_eventThreshold)

static bool jsb_spine_TrackEntry_get_attachmentThreshold(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_attachmentThreshold : Invalid Native Object");
    s.rval().setFloat(cobj->attachmentThreshold);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_attachmentThreshold)

static bool jsb_spine_TrackEntry_get_drawOrderThreshold(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_drawOrderThreshold : Invalid Native Object");
    s.rval().setFloat(cobj->drawOrderThreshold);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_drawOrderThreshold)

static bool jsb_spine_TrackEntry_get_animationStart(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_animationStart : Invalid Native Object");
    s.rval().setFloat(cobj->animationStart);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_animationStart)

static bool jsb_spine_TrackEntry_get_animationEnd(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_animationEnd : Invalid Native Object");
    s.rval().setFloat(cobj->animationEnd);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_animationEnd)

static bool jsb_spine_TrackEntry_get_animationLast(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_animationLast : Invalid Native Object");
    s.rval().setFloat(cobj->animationLast);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_animationLast)

static bool jsb_spine_TrackEntry_get_nextAnimationLast(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_nextAnimationLast : Invalid Native Object");
    s.rval().setFloat(cobj->nextAnimationLast);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_nextAnimationLast)

static bool jsb_spine_TrackEntry_get_delay(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_delay : Invalid Native Object");
    s.rval().setFloat(cobj->delay);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_delay)

static bool jsb_spine_TrackEntry_get_trackTime(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_trackTime : Invalid Native Object");
    s.rval().setFloat(cobj->trackTime);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_trackTime)

static bool jsb_spine_TrackEntry_set_trackTime(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_set_trackTime : Invalid Native Object");
    cobj->trackTime = s.args()[0].toNumber();
    return true;
}
SE_BIND_PROP_SET(jsb_spine_TrackEntry_set_trackTime)

static bool jsb_spine_TrackEntry_get_trackLast(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_trackLast : Invalid Native Object");
    s.rval().setFloat(cobj->trackLast);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_trackLast)

static bool jsb_spine_TrackEntry_get_nextTrackLast(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_nextTrackLast : Invalid Native Object");
    s.rval().setFloat(cobj->nextTrackLast);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_nextTrackLast)

static bool jsb_spine_TrackEntry_get_trackEnd(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_trackEnd : Invalid Native Object");
    s.rval().setFloat(cobj->trackEnd);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_trackEnd)

static bool jsb_spine_TrackEntry_set_trackEnd(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_set_trackEnd : Invalid Native Object");
    cobj->trackEnd = s.args()[0].toNumber();
    return true;
}
SE_BIND_PROP_SET(jsb_spine_TrackEntry_set_trackEnd)

static bool jsb_spine_TrackEntry_get_timeScale(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_timeScale : Invalid Native Object");
    s.rval().setFloat(cobj->timeScale);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_timeScale)

static bool jsb_spine_TrackEntry_get_alpha(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_alpha : Invalid Native Object");
    s.rval().setFloat(cobj->alpha);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_alpha)

static bool jsb_spine_TrackEntry_get_mixTime(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_mixTime : Invalid Native Object");
    s.rval().setFloat(cobj->mixTime);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_mixTime)

static bool jsb_spine_TrackEntry_get_mixDuration(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_mixDuration : Invalid Native Object");
    s.rval().setFloat(cobj->mixDuration);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_mixDuration)

static bool jsb_spine_TrackEntry_get_mixAlpha(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_mixAlpha : Invalid Native Object");
    s.rval().setFloat(cobj->mixAlpha);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_mixAlpha)

static bool jsb_spine_TrackEntry_get_timelinesFirstCount(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_timelinesFirstCount : Invalid Native Object");
    s.rval().setInt32(cobj->timelinesFirstCount);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_timelinesFirstCount)

static bool jsb_spine_TrackEntry_get_timelinesRotationCount(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_timelinesRotationCount : Invalid Native Object");
    s.rval().setInt32(cobj->timelinesRotationCount);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_timelinesRotationCount)

static bool jsb_spine_TrackEntry_get_animation(se::State& s)
{
    spTrackEntry* cobj = (spTrackEntry*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_TrackEntry_get_animation : Invalid Native Object");
    SE_PRECONDITION2(spanimation_to_seval(cobj->animation, &s.rval()), false, "Converting spAnimation failed!");
    return true;
}
SE_BIND_PROP_GET(jsb_spine_TrackEntry_get_animation)

static bool js_register_spine_TrackEntry(se::Object* obj)
{
    se::Class* cls = se::Class::create("TrackEntry", obj, nullptr, _SE(jsb_spine_TrackEntry_constructor));
    cls->defineFunction("mixingFrom", _SE(jsb_spine_TrackEntry_get_mixingFrom));
    cls->defineFunction("next", _SE(jsb_spine_TrackEntry_get_next));

    cls->defineProperty("delay", _SE(jsb_spine_TrackEntry_get_delay), nullptr);
    cls->defineProperty("trackIndex", _SE(jsb_spine_TrackEntry_get_trackIndex), nullptr);
    cls->defineProperty("loop", _SE(jsb_spine_TrackEntry_get_loop), nullptr);
    cls->defineProperty("eventThreshold", _SE(jsb_spine_TrackEntry_get_eventThreshold), nullptr);
    cls->defineProperty("attachmentThreshold", _SE(jsb_spine_TrackEntry_get_attachmentThreshold), nullptr);
    cls->defineProperty("drawOrderThreshold", _SE(jsb_spine_TrackEntry_get_drawOrderThreshold), nullptr);
    cls->defineProperty("animationStart", _SE(jsb_spine_TrackEntry_get_animationStart), nullptr);
    cls->defineProperty("animationEnd", _SE(jsb_spine_TrackEntry_get_animationEnd), nullptr);
    cls->defineProperty("animationLast", _SE(jsb_spine_TrackEntry_get_animationLast), nullptr);
    cls->defineProperty("nextAnimationLast", _SE(jsb_spine_TrackEntry_get_nextAnimationLast), nullptr);
    cls->defineProperty("trackTime", _SE(jsb_spine_TrackEntry_get_trackTime), _SE(jsb_spine_TrackEntry_set_trackTime));
    cls->defineProperty("trackLast", _SE(jsb_spine_TrackEntry_get_trackLast), nullptr);
    cls->defineProperty("nextTrackLast", _SE(jsb_spine_TrackEntry_get_nextTrackLast), nullptr);
    cls->defineProperty("trackEnd", _SE(jsb_spine_TrackEntry_get_trackEnd), _SE(jsb_spine_TrackEntry_set_trackEnd));
    cls->defineProperty("timeScale", _SE(jsb_spine_TrackEntry_get_timeScale), nullptr);
    cls->defineProperty("alpha", _SE(jsb_spine_TrackEntry_get_alpha), nullptr);
    cls->defineProperty("mixTime", _SE(jsb_spine_TrackEntry_get_mixTime), nullptr);
    cls->defineProperty("mixDuration", _SE(jsb_spine_TrackEntry_get_mixDuration), nullptr);
    cls->defineProperty("mixAlpha", _SE(jsb_spine_TrackEntry_get_mixAlpha), nullptr);
    cls->defineProperty("timelinesFirstCount", _SE(jsb_spine_TrackEntry_get_timelinesFirstCount), nullptr);
    cls->defineProperty("timelinesRotationCount", _SE(jsb_spine_TrackEntry_get_timelinesRotationCount), nullptr);
    cls->defineProperty("animation", _SE(jsb_spine_TrackEntry_get_animation), nullptr);

    cls->defineFinalizeFunction(_SE(jsb_spine_TrackEntry_finalize));
    cls->install();

    JSBClassType::registerClass<spTrackEntry>(cls);
    __jsb_spine_TrackEntry_class = cls;
    __jsb_spine_TrackEntry_proto = cls->getProto();

    spTrackEntry_setDisposeCallback([](spTrackEntry* entry){
        se::Object* seObj = nullptr;

        auto iter = se::NativePtrToObjectMap::find(entry);
        if (iter != se::NativePtrToObjectMap::end())
        {
            // Save se::Object pointer for being used in cleanup method.
            seObj = iter->second;
            // Unmap native and js object since native object was destroyed.
            // Otherwise, it may trigger 'assertion' in se::Object::setPrivateData later
            // since native obj is already released and the new native object may be assigned with
            // the same address.
            se::NativePtrToObjectMap::erase(iter);
        }
        else
        {
            return;
        }

        auto cleanup = [seObj](){

            auto se = se::ScriptEngine::getInstance();
            if (!se->isValid() || se->isInCleanup())
                return;

            se::AutoHandleScope hs;
            se->clearException();

            // The mapping of native object & se::Object was cleared in above code.
            // The private data (native object) may be a different object associated with other se::Object.
            // Therefore, don't clear the mapping again.
            seObj->clearPrivateData(false);
            seObj->unroot();
            seObj->decRef();
        };

        if (!se::ScriptEngine::getInstance()->isGarbageCollecting())
        {
            cleanup();
        }
        else
        {
            CleanupTask::pushTaskToAutoReleasePool(cleanup);
        }
    });

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

// Bone registration

se::Class* __jsb_spine_Bone_class = nullptr;
se::Object* __jsb_spine_Bone_proto = nullptr;

static bool jsb_spine_Bone_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spBone)", s.nativeThisObject());
    return true;
}
SE_BIND_FINALIZE_FUNC(jsb_spine_Bone_finalize)

static bool jsb_spine_Bone_constructor(se::State& s)
{
    assert(false);
    return true;
}
SE_BIND_CTOR(jsb_spine_Bone_constructor, __jsb_spine_Bone_class, jsb_spine_Bone_finalize)

static bool jsb_spine_Bone_get_x(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_x : Invalid Native Object");
    s.rval().setFloat(cobj->x);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_x)

static bool jsb_spine_Bone_set_x(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_set_x : Invalid Native Object");
    cobj->x = s.args()[0].toNumber();
    return true;
}
SE_BIND_PROP_SET(jsb_spine_Bone_set_x)

static bool jsb_spine_Bone_get_y(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_y : Invalid Native Object");
    s.rval().setFloat(cobj->y);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_y)

static bool jsb_spine_Bone_set_y(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_set_y : Invalid Native Object");
    cobj->y = s.args()[0].toNumber();
    return true;
}
SE_BIND_PROP_SET(jsb_spine_Bone_set_y)

static bool jsb_spine_Bone_get_scaleX(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_scaleX : Invalid Native Object");
    s.rval().setFloat(cobj->scaleX);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_scaleX)

static bool jsb_spine_Bone_get_scaleY(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_scaleY : Invalid Native Object");
    s.rval().setFloat(cobj->scaleY);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_scaleY)

static bool jsb_spine_Bone_get_worldX(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_worldX : Invalid Native Object");
    s.rval().setFloat(cobj->worldX);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_worldX)

static bool jsb_spine_Bone_get_worldY(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_worldY : Invalid Native Object");
    s.rval().setFloat(cobj->worldY);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_worldY)

static bool jsb_spine_Bone_worldToLocal(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::Vec2 arg0;
        ok &= seval_to_Vec2(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "jsb_spine_Bone_worldToLocal : Error processing arguments");
        spBone* cobj = (spBone*)s.nativeThisObject();
        SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_worldToLocal : Invalid Native Object");
        cocos2d::Vec2 result;
        spBone_worldToLocal(cobj, arg0.x, arg0.y, &result.x, &result.y);
        ok &= Vec2_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "jsb_spine_Bone_worldToLocal : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(jsb_spine_Bone_worldToLocal)

static bool jsb_spine_Bone_get_data(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_data : Invalid Native Object");
    spbonedata_to_seval(cobj->data, &s.rval());
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_data)

static bool jsb_spine_Bone_get_parent(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_parent : Invalid Native Object");
    spbone_to_seval(cobj->parent, &s.rval());
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_parent)

static bool jsb_spine_Bone_get_rotation(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_rotation : Invalid Native Object");
    s.rval().setFloat(cobj->rotation);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_rotation)

static bool jsb_spine_Bone_set_rotation(se::State& s)
{
    spBone* cobj = (spBone*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_set_rotation : Invalid Native Object");
    cobj->rotation = s.args()[0].toNumber();
    return true;
}
SE_BIND_PROP_SET(jsb_spine_Bone_set_rotation)

static bool jsb_spine_Bone_get_shearX(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_shearX : Invalid Native Object");
    s.rval().setFloat(cobj->shearX);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_shearX)

static bool jsb_spine_Bone_get_shearY(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_shearY : Invalid Native Object");
    s.rval().setFloat(cobj->shearY);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_shearY)

static bool jsb_spine_Bone_get_m00(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_m00 : Invalid Native Object");
    s.rval().setFloat(cobj->a);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_m00)

static bool jsb_spine_Bone_get_m01(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_m01 : Invalid Native Object");
    s.rval().setFloat(cobj->b);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_m01)

static bool jsb_spine_Bone_get_m10(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_m10 : Invalid Native Object");
    s.rval().setFloat(cobj->c);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_m10)

static bool jsb_spine_Bone_get_m11(se::State& s)
{
    spBone* cobj = (spBone*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Bone_get_m11 : Invalid Native Object");
    s.rval().setFloat(cobj->d);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Bone_get_m11)

static bool js_register_spine_Bone(se::Object* obj)
{
    se::Class* cls = se::Class::create("Bone", obj, nullptr, _SE(jsb_spine_Bone_constructor));
    cls->defineFunction("worldToLocal", _SE(jsb_spine_Bone_worldToLocal));

    cls->defineProperty("x", _SE(jsb_spine_Bone_get_x), _SE(jsb_spine_Bone_set_x));
    cls->defineProperty("y", _SE(jsb_spine_Bone_get_y), _SE(jsb_spine_Bone_set_y));
    cls->defineProperty("scaleX", _SE(jsb_spine_Bone_get_scaleX), nullptr);
    cls->defineProperty("scaleY", _SE(jsb_spine_Bone_get_scaleY), nullptr);
    cls->defineProperty("worldX", _SE(jsb_spine_Bone_get_worldX), nullptr);
    cls->defineProperty("worldY", _SE(jsb_spine_Bone_get_worldY), nullptr);
    cls->defineProperty("data", _SE(jsb_spine_Bone_get_data), nullptr);
    cls->defineProperty("parent", _SE(jsb_spine_Bone_get_parent), nullptr);
    cls->defineProperty("rotation", _SE(jsb_spine_Bone_get_rotation), _SE(jsb_spine_Bone_set_rotation));
    cls->defineProperty("shearX", _SE(jsb_spine_Bone_get_shearX), nullptr);
    cls->defineProperty("shearY", _SE(jsb_spine_Bone_get_shearY), nullptr);
    cls->defineProperty("m00", _SE(jsb_spine_Bone_get_m00), nullptr);
    cls->defineProperty("m01", _SE(jsb_spine_Bone_get_m01), nullptr);
    cls->defineProperty("m10", _SE(jsb_spine_Bone_get_m10), nullptr);
    cls->defineProperty("m11", _SE(jsb_spine_Bone_get_m11), nullptr);
    
    cls->defineFinalizeFunction(_SE(jsb_spine_Bone_finalize));
    cls->install();
    
    JSBClassType::registerClass<spBone>(cls);
    __jsb_spine_Bone_class = cls;
    __jsb_spine_Bone_proto = cls->getProto();
    
    spBone_setDisposeCallback([](spBone* bone){
        se::Object* seObj = nullptr;

        auto iter = se::NativePtrToObjectMap::find(bone);
        if (iter != se::NativePtrToObjectMap::end())
        {
            // Save se::Object pointer for being used in cleanup method.
            seObj = iter->second;
            // Unmap native and js object since native object was destroyed.
            // Otherwise, it may trigger 'assertion' in se::Object::setPrivateData later
            // since native obj is already released and the new native object may be assigned with
            // the same address.
            se::NativePtrToObjectMap::erase(iter);
        }
        else
        {
            return;
        }

        auto cleanup = [seObj](){

            auto se = se::ScriptEngine::getInstance();
            if (!se->isValid() || se->isInCleanup())
                return;

            se::AutoHandleScope hs;
            se->clearException();

            // The mapping of native object & se::Object was cleared in above code.
            // The private data (native object) may be a different object associated with other se::Object.
            // Therefore, don't clear the mapping again.
            seObj->clearPrivateData(false);
            seObj->unroot();
            seObj->decRef();
        };

        if (!se::ScriptEngine::getInstance()->isGarbageCollecting())
        {
            cleanup();
        }
        else
        {
            CleanupTask::pushTaskToAutoReleasePool(cleanup);
        }
    });
    
    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine_Slot_proto = nullptr;
se::Class* __jsb_spine_Slot_class = nullptr;

static bool jsb_spine_Slot_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spSlot)", s.nativeThisObject());
    return true;
}
SE_BIND_FINALIZE_FUNC(jsb_spine_Slot_finalize)

static bool jsb_spine_Slot_constructor(se::State& s)
{
    assert(false);
    return true;
}
SE_BIND_CTOR(jsb_spine_Slot_constructor, __jsb_spine_Slot_class, jsb_spine_Slot_finalize)

static bool jsb_spine_Slot_setToSetupPose(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_setToSetupPose : Invalid Native Object");
    spSlot_setToSetupPose(cobj);
    return true;

}
SE_BIND_FUNC(jsb_spine_Slot_setToSetupPose)

static bool jsb_spine_Slot_getBone(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_getBone : Invalid Native Object");
    spbone_to_seval(cobj->bone, &s.rval());
    return true;
    
}
SE_BIND_PROP_GET(jsb_spine_Slot_getBone)

static bool jsb_spine_Slot_getAttachment(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_getAttachment : Invalid Native Object");
    CC_UNUSED bool ok = true;
    ok &= native_ptr_to_rooted_seval<spAttachment>((spAttachment*)cobj->attachment, &s.rval());
    SE_PRECONDITION2(ok, false, "jsb_spine_Slot_getAttachment : Error processing arguments");
    return true;

}
SE_BIND_FUNC(jsb_spine_Slot_getAttachment)

static bool jsb_spine_Slot_setAttachment(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_setAttachment : Invalid Native Object");
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        spAttachment* arg0 = nullptr;
        ok &= seval_to_native_ptr(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "jsb_spine_Slot_setAttachment : Error processing arguments");
        spSlot_setAttachment(cobj, arg0);
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(jsb_spine_Slot_setAttachment)

static bool jsb_spine_Slot_get_r(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_get_r : Invalid Native Object");
    float_to_seval(cobj->r, &s.rval());
    return true;
    
}
SE_BIND_PROP_GET(jsb_spine_Slot_get_r)

static bool jsb_spine_Slot_get_g(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_get_g : Invalid Native Object");
    float_to_seval(cobj->g, &s.rval());
    return true;
   
}
SE_BIND_PROP_GET(jsb_spine_Slot_get_g)

static bool jsb_spine_Slot_get_b(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_get_b : Invalid Native Object");
    float_to_seval(cobj->b, &s.rval());
    return true;
  
}
SE_BIND_PROP_GET(jsb_spine_Slot_get_b)

static bool jsb_spine_Slot_get_a(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_get_a : Invalid Native Object");
    float_to_seval(cobj->a, &s.rval());
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Slot_get_a)

static bool jsb_spine_Slot_getData(se::State& s)
{
    spSlot* cobj = (spSlot*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Slot_getData : Invalid Native Object");
    spslotdata_to_seval(cobj->data, &s.rval());
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Slot_getData)

bool js_register_spine_Slot(se::Object* obj)
{
    auto cls = se::Class::create("Slot", obj, nullptr, _SE(jsb_spine_Slot_constructor));
    cls->defineFunction("setToSetupPose", _SE(jsb_spine_Slot_setToSetupPose));
    cls->defineFunction("getAttachment", _SE(jsb_spine_Slot_getAttachment));
    cls->defineFunction("setAttachment", _SE(jsb_spine_Slot_setAttachment));
    
    cls->defineProperty("bone", _SE(jsb_spine_Slot_getBone), nullptr);
    cls->defineProperty("r", _SE(jsb_spine_Slot_get_r), nullptr);
    cls->defineProperty("g", _SE(jsb_spine_Slot_get_g), nullptr);
    cls->defineProperty("b", _SE(jsb_spine_Slot_get_b), nullptr);
    cls->defineProperty("a", _SE(jsb_spine_Slot_get_a), nullptr);
    cls->defineProperty("attachment", _SE(jsb_spine_Slot_getAttachment), _SE(jsb_spine_Slot_setAttachment));
    cls->defineProperty("data", _SE(jsb_spine_Slot_getData), nullptr);

    cls->defineFinalizeFunction(_SE(jsb_spine_Slot_finalize));
    cls->install();
    JSBClassType::registerClass<spSlot>(cls);

    __jsb_spine_Slot_proto = cls->getProto();
    __jsb_spine_Slot_class = cls;
    
    spSlot_setDisposeCallback([](spSlot* slot){
        se::Object* seObj = nullptr;

        auto iter = se::NativePtrToObjectMap::find(slot);
        if (iter != se::NativePtrToObjectMap::end())
        {
            // Save se::Object pointer for being used in cleanup method.
            seObj = iter->second;
            // Unmap native and js object since native object was destroyed.
            // Otherwise, it may trigger 'assertion' in se::Object::setPrivateData later
            // since native obj is already released and the new native object may be assigned with
            // the same address.
            se::NativePtrToObjectMap::erase(iter);
        }
        else
        {
            return;
        }

        auto cleanup = [seObj](){

            auto se = se::ScriptEngine::getInstance();
            if (!se->isValid() || se->isInCleanup())
                return;

            se::AutoHandleScope hs;
            se->clearException();

            // The mapping of native object & se::Object was cleared in above code.
            // The private data (native object) may be a different object associated with other se::Object.
            // Therefore, don't clear the mapping again.
            seObj->clearPrivateData(false);
            seObj->unroot();
            seObj->decRef();
        };
        
        if (!se::ScriptEngine::getInstance()->isGarbageCollecting())
        {
            cleanup();
        }
        else
        {
            CleanupTask::pushTaskToAutoReleasePool(cleanup);
        }
    });

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

se::Object* __jsb_spine_Attachment_proto = nullptr;
se::Class* __jsb_spine_Attachment_class = nullptr;

static bool jsb_spine_Attachment_finalize(se::State& s)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (spAttachment)", s.nativeThisObject());
    return true;
}
SE_BIND_FINALIZE_FUNC(jsb_spine_Attachment_finalize)

static bool jsb_spine_Attachment_constructor(se::State& s)
{
    assert(false);
    return true;
}
SE_BIND_CTOR(jsb_spine_Attachment_constructor, __jsb_spine_Attachment_class, jsb_spine_Attachment_finalize)

static bool jsb_spine_Attachment_get_name(se::State& s)
{
    spAttachment* cobj = (spAttachment*)s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Attachment_get_name : Invalid Native Object");
    s.rval().setString(cobj->name);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Attachment_get_name)

static bool jsb_spine_Attachment_get_type(se::State& s)
{
    spAttachment* cobj = (spAttachment*) s.nativeThisObject();
    SE_PRECONDITION2(cobj, false, "jsb_spine_Attachment_get_type : Invalid Native Object");
    s.rval().setInt32(cobj->type);
    return true;
}
SE_BIND_PROP_GET(jsb_spine_Attachment_get_type)

bool js_register_spine_Attachment(se::Object* obj)
{
    auto cls = se::Class::create("Attachment", obj, nullptr, _SE(jsb_spine_Attachment_constructor));
    cls->defineProperty("name", _SE(jsb_spine_Attachment_get_name), nullptr);
    cls->defineProperty("type", _SE(jsb_spine_Attachment_get_type), nullptr);

    cls->defineFinalizeFunction(_SE(jsb_spine_Attachment_finalize));
    cls->install();
    JSBClassType::registerClass<spAttachment>(cls);

    __jsb_spine_Attachment_proto = cls->getProto();
    __jsb_spine_Attachment_class = cls;
    
    spAttachment_setDisposeCallback([](spAttachment* attachment){
        se::Object* seObj = nullptr;

        auto iter = se::NativePtrToObjectMap::find(attachment);
        if (iter != se::NativePtrToObjectMap::end())
        {
            // Save se::Object pointer for being used in cleanup method.
            seObj = iter->second;
            // Unmap native and js object since native object was destroyed.
            // Otherwise, it may trigger 'assertion' in se::Object::setPrivateData later
            // since native obj is already released and the new native object may be assigned with
            // the same address.
            se::NativePtrToObjectMap::erase(iter);
        }
        else
        {
            return;
        }

        auto cleanup = [seObj](){

            auto se = se::ScriptEngine::getInstance();
            if (!se->isValid() || se->isInCleanup())
                return;

            se::AutoHandleScope hs;
            se->clearException();

            // The mapping of native object & se::Object was cleared in above code.
            // The private data (native object) may be a different object associated with other se::Object.
            // Therefore, don't clear the mapping again.
            seObj->clearPrivateData(false);
            seObj->unroot();
            seObj->decRef();
        };

        if (!se::ScriptEngine::getInstance()->isGarbageCollecting())
        {
            cleanup();
        }
        else
        {
            CleanupTask::pushTaskToAutoReleasePool(cleanup);
        }
    });

    se::ScriptEngine::getInstance()->clearException();
    return true;
}

bool register_all_spine_manual(se::Object* obj)
{
    js_register_spine_TrackEntry(obj);
    js_register_spine_Bone(obj);
    js_register_spine_Slot(obj);
    js_register_spine_Attachment(obj);
    return true;
}
