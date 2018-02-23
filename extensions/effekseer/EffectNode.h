#pragma once
#include "2d/CCNode.h"

namespace efk
{
	class EffectManager;
	class EffectEmitter;
	class Effect;
}

using namespace cocos2d;

class CC_DLL Effect : public Ref
{
public:
	static Effect* create(const std::string& filename);

	Effect();
	~Effect();
	bool init(const std::string& filename);

	efk::Effect* getEntity();
private:
	efk::Effect* _entity;
};

class CC_DLL EffectNode : public Node
{
public:
	static EffectNode* create(const std::string& filename);
	static EffectNode* create(Effect* effect);

	EffectNode();
	~EffectNode();
	bool init(const std::string& filename);
	bool init(Effect* effect);
	void visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags) override;
	void update(float delta) override;
	void setIsLooping(bool loop);
private:
    Effect* _effect;
	efk::EffectManager* _manager;
	efk::EffectEmitter* _emitter;
};
