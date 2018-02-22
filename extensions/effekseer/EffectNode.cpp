#include "EffectNode.h"
#include "Effekseer.h"

Effect * Effect::create(const std::string& filename)
{
	Effect * ret = new (std::nothrow) Effect();
	ret->init(filename);
	ret->autorelease();
	return ret;
}

Effect::Effect() :_entity(nullptr)
{
}


Effect::~Effect()
{
	delete _entity;
}

bool Effect::init(const std::string & filename)
{
	_entity = efk::Effect::create(filename);
	if (_entity == nullptr)
	{
		cocos2d::log("error: efk::Effect::create(%s)", filename.c_str());
		return false;
	}
	return true;
}

efk::Effect* Effect::getEntity()
{
	return _entity;
};

EffectNode * EffectNode::create(const std::string& filename)
{
	EffectNode * ret = new (std::nothrow) EffectNode();
	ret->init(filename);
	ret->autorelease();
	return ret;
}

EffectNode * EffectNode::create(Effect * effect)
{
	EffectNode * ret = new (std::nothrow) EffectNode();
	ret->init(effect);
	ret->autorelease();
	return ret;
}

EffectNode::EffectNode():_manager(nullptr), _emitter(nullptr)
{
}


EffectNode::~EffectNode()
{
	delete _manager;
	delete _emitter;
    CC_SAFE_RELEASE(_effect);
}

bool EffectNode::init(const std::string& filename)
{
	if (!Node::init()) return false;

	_manager = efk::EffectManager::create(Director::getInstance()->getVisibleSize());
	_emitter = efk::EffectEmitter::create(_manager);

	auto effect = efk::Effect::create(filename);
	if (effect == nullptr)
	{
		cocos2d::log("error: efk::Effect::create(%s)", filename.c_str());
		return false;
	}
	effect->autorelease();

	_emitter->setEffect(effect);
	_emitter->setPlayOnEnter(true);
	this->addChild(_emitter);
	this->scheduleUpdate();
	return true;
}

bool EffectNode::init(Effect * effect)
{
	if (!Node::init()) return false;

	_manager = efk::EffectManager::create(Director::getInstance()->getVisibleSize());
	_emitter = efk::EffectEmitter::create(_manager);
	_emitter->setEffect(effect->getEntity());
    effect->retain();
    _effect = effect;
	_emitter->setPlayOnEnter(true);
	this->addChild(_emitter);
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

const Vec2 & EffectNode::getPosition() const
{
	return _emitter->getPosition();
}

void EffectNode::setPosition(const Vec2 & position)
{
	_emitter->setPosition(position);
}

void EffectNode::setPosition(float x, float y)
{
	_emitter->setPosition(x, y);
}

void EffectNode::setScale(float scale)
{
	_emitter->setScale(scale);
}

void EffectNode::setScale(float scaleX, float scaleY)
{
	_emitter->setScale(scaleX, scaleY);
}
