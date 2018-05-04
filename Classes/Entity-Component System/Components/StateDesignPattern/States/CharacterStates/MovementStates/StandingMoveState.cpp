//
//  StandingMoveState.cpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//

#include "StandingMoveState.hpp"

#include <iostream>

StandingMoveState::StandingMoveState()
{
}

StandingMoveState::StandingMoveState(Player* p) : ICharacterState(p)
{
}

void StandingMoveState::enter()
{
}

void StandingMoveState::exit()
{
}

//update function which doesnt move the player 
void StandingMoveState::update(float delta)
{
    std::cout << "standing" << std::endl;
    
    auto position = p->sprite->getPosition(); //get the position of the player
    p->sprite->setPosition(position); //set the new position of the sprite to be just where the sprite originally was
    
    p->stateMachine->changeState("Jumping");
}
