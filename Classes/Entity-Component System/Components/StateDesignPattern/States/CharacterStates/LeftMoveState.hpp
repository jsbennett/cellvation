//
//  LeftMoveState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 02/05/2018.
//

#ifndef LeftMoveState_hpp
#define LeftMoveState_hpp

#include <stdio.h>
#include "IState.hpp"

class LeftMoveState : public IState
{
public:
    void update(cocos2d::Sprite* sprite, float delta);
};
#endif /* LeftMoveState_hpp */
