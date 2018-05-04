//
//  LeftMoveState.cpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//

#include "LeftMoveState.hpp"
#include <iostream>

LeftMoveState::LeftMoveState()
{
}

LeftMoveState::LeftMoveState(Player* p) : ICharacterState(p)
{
}

void LeftMoveState::enter()
{
}

void LeftMoveState::exit()
{
}

//update function which moves left 
void LeftMoveState::update(float delta)
{
    std::cout << "left" << std::endl;
    
    auto position = p->sprite->getPosition(); //get the position of the player
    position.x = position.x - 100 * delta; //move to the left
    position.y = position.y + 0; //do not move the y axis
    p->sprite->setPosition(position); //set the new position of the sprite
    
    p->stateMachine->changeState("Right");
}
