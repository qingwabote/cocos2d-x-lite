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

static bool js_cocos2dx_spine_bone_worldToLocal(se::State& s)
{
    const auto& args = s.args();
    size_t argc = args.size();
    CC_UNUSED bool ok = true;
    if (argc == 1) {
        cocos2d::Vec2 arg0;
        ok &= seval_to_Vec2(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine_bone_worldToLocal : Error processing arguments");
        spine::Bone* cobj = (spine::Bone*)s.nativeThisObject();
        cocos2d::Vec2 result;
        cobj->worldToLocal(arg0.x, arg0.y, result.x, result.y);
        ok &= Vec2_to_seval(result, &s.rval());
        SE_PRECONDITION2(ok, false, "js_cocos2dx_spine_bone_worldToLocal : Error processing arguments");
        return true;
    }
    SE_REPORT_ERROR("wrong number of arguments: %d, was expecting %d", (int)argc, 1);
    return false;
}
SE_BIND_FUNC(js_cocos2dx_spine_bone_worldToLocal)

bool register_all_spine_manual(se::Object* obj)
{
    __jsb_spine_Bone_proto->defineFunction("worldToLocal", _SE(js_cocos2dx_spine_bone_worldToLocal));

    return true;
}
