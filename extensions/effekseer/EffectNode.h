#pragma once
#include "2d/CCNode.h"

namespace efk
{
	class EffectManager;
	class EffectEmitter;
}

using namespace cocos2d;

class CC_DLL EffectNode : public Node
{
public:
	static EffectNode* create(const std::string& filename);

	EffectNode();
	~EffectNode();
	bool init(const std::string& filename);
	void visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags) override;
	void update(float delta) override;
	void setIsLooping(bool loop);
	void setPosition(const Vec2 &position);
	void setScale(float scale);
private:
	efk::EffectManager* _manager;
	efk::EffectEmitter* _emitter;
};