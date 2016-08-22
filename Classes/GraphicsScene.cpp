#include "GraphicsScene.h"

USING_NS_CC;

Scene* GraphicsScene::createScene() {
    auto scene = Scene::create();
    auto layer = GraphicsScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool GraphicsScene::init() {
    if (!Layer::init()) return false;
    
    auto sprite = Sprite::create("/Users/kylescales/Documents/Projects/cocos2d/temp/MyCppGame/Resources/transformer.png");
    auto sprite2 = Sprite::create("/Users/kylescales/Documents/Projects/cocos2d/temp/MyCppGame/Resources/transformerSmall.png");
    
    sprite->setAnchorPoint(Vec2(0, 0));
    sprite2->setAnchorPoint(Vec2(0, 0));
    
    sprite->addChild(sprite2, 0);
    
    sprite->setPosition(100, 100);
    sprite->setRotation(10);
    
    sprite2->setPosition(0, 0);
    sprite2->setRotation(-10);
    
    this->addChild(sprite, 0);
    
    return true;
}