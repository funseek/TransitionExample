//
//  TopScene.hpp
//  TransitionExample
//
//  Created by YamazakiAkio on 2/26/16.
//
//

#ifndef TopScene_hpp
#define TopScene_hpp

#include "cocos2d.h"
#include "ui/CocosGUI.h"

class TopScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(TopScene);
private:
    cocos2d::ui::Layout* pushSecondScene(std::string title, const cocos2d::ui::Widget::ccWidgetTouchCallback& callback);
};


#endif /* TopScene_hpp */
