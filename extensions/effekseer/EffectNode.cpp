#include "EffectNode.h"
#include "Effekseer.h"

EffectNode * EffectNode::create(const std::string& filename)
{
	EffectNode * ret = new (std::nothrow) EffectNode();
	if (ret && ret->init(filename))
	{
		ret->autorelease();
	}
	else
	{
		CC_SAFE_DELETE(ret);
	}
	return ret;
}

EffectNode::EffectNode():_manager(nullptr), _emitter(nullptr)
{
}


EffectNode::~EffectNode()
{
	CC_SAFE_RELEASE_NULL(_manager);
	CC_SAFE_RELEASE_NULL(_emitter);
}

bool EffectNode::init(const std::string& filename)
{
	if (!Node::init()) return false;

	auto effect = efk::Effect::create(filename);
	if (effect == nullptr) return false;

	//_manager = efk::EffectManager::create(Director::getInstance()->getOpenGLView()->getDesignResolutionSize());
	_manager = efk::EffectManager::create(Director::getInstance()->getVisibleSize());
	_emitter = efk::EffectEmitter::create(_manager);
	_emitter->setEffect(effect);
	_emitter->setPlayOnEnter(true);
	this->addChild(_emitter);
	effect->release();
	this->scheduleUpdate();
	return true;
}

void EffectNode::visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags)
{
	_manager->begin(renderer, _globalZOrder);
	Node::visit(renderer, parentTransform, parentFlags);
	_manager->end(renderer, _globalZOrder);
}

void EffectNode::update(float delta)
{
	_manager->update();
}

void EffectNode::setIsLooping(bool loop)
{
	_emitter->setIsLooping(loop);
}

void EffectNode::setPosition(const Vec2 & position)
{
	_emitter->setPosition(position);
}

void EffectNode::setScale(float scale)
{
	_emitter->setScale(scale);
}
