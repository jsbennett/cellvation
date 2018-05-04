//
//  StandingMoveState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//
// StandingMoveState - specific implementaition of ICharacter state for the player to stand idle

#ifndef StandingMoveState_hpp
#define StandingMoveState_hpp

#include <stdio.h>
#include "ICharacterState.hpp"

class StandingMoveState : public ICharacterState {
public:
    StandingMoveState(); //default constructor
    StandingMoveState(Player* p); //inialise a player variable of the  player to be able to move them
    
    //implementations of the enter, exit and update functions which override the inherited functions
    void enter() override;
    void exit() override;
    void update(float delta) override;
};
#endif /* StandingMoveState_hpp */
