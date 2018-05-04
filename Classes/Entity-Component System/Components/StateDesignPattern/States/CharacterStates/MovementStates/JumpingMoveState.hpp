//
//  JumpingMoveState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//
// JumpingMoveState - specific implementaition of ICharacter state for the player to move up

#ifndef JumpingMoveState_hpp
#define JumpingMoveState_hpp

#include <stdio.h>
#include "ICharacterState.hpp"

class JumpingMoveState : public ICharacterState {
public:
    JumpingMoveState(); //default constructor
    JumpingMoveState(Player* p); //inialise a player variable of the  player to be able to move them
    
    //implementations of the enter, exit and update functions which override the inherited functions
    void enter() override;
    void exit() override;
    void update(float delta) override;
};
#endif /* JumpingMoveState_hpp */
