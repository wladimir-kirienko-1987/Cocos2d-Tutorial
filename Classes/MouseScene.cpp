#include "MouseScene.h"

USING_NS_CC;

Scene* MouseScene::createScene() {
    auto scene = Scene::create();
    auto layer = MouseScene::create();
    scene->addChild(layer);
    
    return scene;
}

bool MouseScene::init() {
    if (!Layer::init()) return false;
    
    auto listener = EventListenerMouse::create();
    
    listener->onMouseDown = [](cocos2d::Event* event) {
//        EventMouse* mouseEvent = dynamic_cast<EventMouse*>(event);
        log("click");
    };

    
    listener->onMouseMove = [](Event* event) {
        log("Mouse moved event");
    };
    
    listener->onMouseScroll = [](Event* event) {
        log("Mouse wheel scrolled");
    };
    
    listener->onMouseUp = [](Event* event) {
        log("Mouse button released");
    };
    
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}
