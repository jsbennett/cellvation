//
//  ICharacterStates.hpp
//  cellvasion
//
//  Created by Jay Bennett on 03/05/2018.
//
// this provides an implementation of the IState interfae for character states

#ifndef ICharacterStates_hpp
#define ICharacterStates_hpp

#include <stdio.h>
#include "IState.hpp"
#include "Player.hpp"

class ICharacterState : public IState {
public:
    ICharacterState(); //default constructor
    ICharacterState(Player* p); //constructor to hold the player object
    
    //the enter,exit and update functions from IState
    virtual void enter() override;
    virtual void exit() override;
    virtual void update(float delta) override;
    
    Player* p; //a variable to hold the current player variable 
};
#endif /* ICharacterStates_hpp */
