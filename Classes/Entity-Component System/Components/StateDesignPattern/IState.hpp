//
//  IState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 02/05/2018.
// purpose: This is a standard state class in which every state will be derived from

#ifndef IState_hpp
#define IState_hpp

#include <stdio.h>
#include "cocos2d.h"

class IState
{
public:
    virtual void update(cocos2d::Sprite* sprite, float delta); //update method which moves the sprite depending upon the state - use virtual keyword so it can be overwritten
};

#endif /* IState_hpp */
