//
//  RightMoveState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//
// RightMoveState - specific implementaition of ICharacter state for the player to move right

#ifndef RightMoveState_hpp
#define RightMoveState_hpp

#include <stdio.h>
#include <stdio.h>
#include "ICharacterState.hpp"

class RightMoveState : public ICharacterState {
public:
    RightMoveState(); //default constructor 
    RightMoveState(Player* p); //inialise a player variable of the  player to be able to move them
    
    //implementations of the enter, exit and update functions which override the inherited functions 
    void enter() override;
    void exit() override;
    void update(float delta) override;
};
#endif /* RightMoveState_hpp */
