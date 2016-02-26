//
//  SecondScene.cpp
//  TransitionExample
//
//  Created by YamazakiAkio on 2/26/16.
//
//

#include "SecondScene.hpp"
#include "ui/CocosGUI.h"
#include "TopScene.hpp"

USING_NS_CC;

Scene* SecondScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = SecondScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool SecondScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size size = Director::getInstance()->getWinSize();
    
    auto button = ui::Button::create();
    button->setTitleText("Back");
    button->setTitleFontSize(100);
    button->setPosition(Point(size.width * 0.5, size.height * 0.5));
    button->addTouchEventListener([&](Ref* sender, ui::Widget::TouchEventType type){
        switch (type)
        {
            case ui::Widget::TouchEventType::BEGAN:
                break;
            case ui::Widget::TouchEventType::ENDED:
                Director::getInstance()->replaceScene(TopScene::createScene());
                break;
            default:
                break;
        }
    });
    this->addChild(button);

    return true;
}