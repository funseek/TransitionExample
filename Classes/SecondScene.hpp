//
//  SecondScene.hpp
//  TransitionExample
//
//  Created by YamazakiAkio on 2/26/16.
//
//

#ifndef SecondScene_hpp
#define SecondScene_hpp

#include "cocos2d.h"

class SecondScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(SecondScene);
};


#endif /* SecondScene_hpp */
