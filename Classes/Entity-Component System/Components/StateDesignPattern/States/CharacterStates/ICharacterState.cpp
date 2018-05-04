//
//  ICharacterStates.cpp
//  cellvasion
//
//  Created by Jay Bennett on 03/05/2018.
//

#include "ICharacterState.hpp"

//default constructor
ICharacterState::ICharacterState()
{
}

//constructor to set the player object to be the current players object
ICharacterState::ICharacterState(Player* p)
{
    this->p = p;
}

//empty enter, exit and update methods 
void ICharacterState::enter()
{
}

void ICharacterState::exit()
{
}

void ICharacterState::update(float delta)
{
}
