//
//  LeftMoveState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//
// LeftMoveState - specific implementaition of ICharacter state for the player to move left 

#ifndef LeftMoveState_hpp
#define LeftMoveState_hpp

#include <stdio.h>
#include "ICharacterState.hpp"

class LeftMoveState : public ICharacterState {
public:
    LeftMoveState(); //default constructor
    LeftMoveState(Player* p); //inialise a player variable of the  player to be able to move them
    
    //implementations of the enter, exit and update functions which override the inherited functions 
    void enter() override;
    void exit() override;
    void update(float delta) override;
};
#endif /* LeftMoveState_hpp */
