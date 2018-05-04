//
//  RightMoveState.cpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//

#include "RightMoveState.hpp"
#include <iostream>

RightMoveState::RightMoveState()
{
}

RightMoveState::RightMoveState(Player* p) : ICharacterState(p)
{
}

void RightMoveState::enter()
{
}

void RightMoveState::exit()
{
}

//update function which moves right 
void RightMoveState::update(float delta)
{
    std::cout << "right" << std::endl;
    
    auto position = p->sprite->getPosition(); //get the position of the player
    position.x = position.x + 100 * delta; //move to the right
    position.y = position.y + 0; //do not move the y axis
    p->sprite->setPosition(position); //set the new position of the sprite
    
    p->stateMachine->changeState("Left");
}
