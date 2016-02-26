//
//  TopScene.cpp
//  TransitionExample
//
//  Created by YamazakiAkio on 2/26/16.
//
//

#include "TopScene.hpp"
#include "SecondScene.hpp"


USING_NS_CC;

Scene* TopScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = TopScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool TopScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size size = Director::getInstance()->getWinSize();
    
    // list view
    auto lv = ui::ListView::create();
    lv->setGravity(ui::ListView::Gravity::CENTER_VERTICAL);
    lv->setContentSize(size);
    lv->setPosition(Point::ZERO);
    lv->setBounceEnabled(true);
    lv->setScrollBarAutoHideEnabled(true);
    lv->setScrollBarAutoHideTime(0.4);
    
    lv->addChild(this->pushSecondScene("TransitionCrossFade",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionCrossFade::create(1, SecondScene::createScene()));
    }));

    lv->addChild(this->pushSecondScene("TransitionFade",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFade::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFadeBL",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFadeBL::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFadeDown",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFadeDown::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFadeTR",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFadeTR::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFadeUp",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFadeUp::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFlipAngular",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFlipAngular::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFlipX",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFlipX::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionFlipY",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionFlipY::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionJumpZoom",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionJumpZoom::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionMoveInB",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionMoveInB::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionMoveInL",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionMoveInL::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionMoveInR",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionMoveInR::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionMoveInT",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionMoveInT::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionPageTurn",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionPageTurn::create(1, SecondScene::createScene(), false));
    }));
    
//    lv->addChild(this->pushSecondScene("TransitionProgress",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
//        Director::getInstance()->replaceScene(TransitionProgress::create(1, SecondScene::createScene()));
//    }));

    lv->addChild(this->pushSecondScene("TransitionProgressHorizontal",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionProgressHorizontal::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionProgressInOut",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionProgressInOut::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionProgressOutIn",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionProgressOutIn::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionProgressRadialCCW",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionProgressRadialCCW::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionProgressRadialCW",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionProgressRadialCW::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionProgressVertical",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionProgressVertical::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionRotoZoom",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionRotoZoom::create(1, SecondScene::createScene()));
    }));
    
//    lv->addChild(this->pushSecondScene("TransitionScene",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
//        Director::getInstance()->replaceScene(TransitionScene::create(1, SecondScene::createScene()));
//    }));
//    
//    lv->addChild(this->pushSecondScene("TransitionSceneOriented",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
//        Director::getInstance()->replaceScene(TransitionSceneOriented::create(1, SecondScene::createScene(), TransitionScene::Orientation::UP_OVER));
//    }));
    
    lv->addChild(this->pushSecondScene("TransitionShrinkGrow",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionShrinkGrow::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionSlideInB",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionSlideInB::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionSlideInL",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionSlideInL::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionSlideInR",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionSlideInR::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionSlideInT",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionSlideInT::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionSplitCols",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionSplitCols::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionSplitRows",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionSplitRows::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionTurnOffTiles",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionTurnOffTiles::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionZoomFlipAngular",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionZoomFlipAngular::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionZoomFlipX",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionZoomFlipX::create(1, SecondScene::createScene()));
    }));
    
    lv->addChild(this->pushSecondScene("TransitionZoomFlipY",[](Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
        Director::getInstance()->replaceScene(TransitionZoomFlipY::create(1, SecondScene::createScene()));
    }));
    
    this->addChild(lv);
    
    return true;
}

ui::Layout* TopScene::pushSecondScene(std::string title, const ui::Widget::ccWidgetTouchCallback& callback)
{
    Size size = Director::getInstance()->getWinSize();
    auto layout = ui::Layout::create();
    layout->setContentSize(Size(size.width, 80));
    layout->setPosition(Point::ZERO);
    auto text = ui::Text::create(title, "fonts/Marker Felt.ttf", 50);
    text->setPosition(Point(size.width * 0.5, layout->getContentSize().height * 0.5));
    text->setTouchEnabled(true);
    text->addTouchEventListener(callback);
    layout->addChild(text);
    return layout;
}
