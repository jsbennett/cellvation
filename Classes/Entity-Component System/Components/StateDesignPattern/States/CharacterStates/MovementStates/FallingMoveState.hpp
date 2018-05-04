//
//  FallingMoveState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//
// FallingMoveState - specific implementaition of ICharacter state for the player to move down

#ifndef FallingMoveState_hpp
#define FallingMoveState_hpp

#include <stdio.h>
#include "ICharacterState.hpp"

class FallingMoveState : public ICharacterState {
public:
    FallingMoveState(); //default constructor
    FallingMoveState(Player* p); //inialise a player variable of the  player to be able to move them
    
    //implementations of the enter, exit and update functions which override the inherited functions
    void enter() override;
    void exit() override;
    void update(float delta) override;
};
#endif /* FallingMoveState_hpp */
