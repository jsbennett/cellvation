//
//  JumpingMoveState.cpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//

#include "JumpingMoveState.hpp"
#include <iostream>

JumpingMoveState::JumpingMoveState()
{
}

JumpingMoveState::JumpingMoveState(Player* p) : ICharacterState(p)
{
}

void JumpingMoveState::enter()
{
}

void JumpingMoveState::exit()
{
}

//update function which moves the player up
void JumpingMoveState::update(float delta)
{
    std::cout << "Jumping" << std::endl;
    
    auto position = p->sprite->getPosition(); //get the position of the player
    position.x = position.x + 0;
    position.y =  position.y + 100 * delta;
    p->sprite->setPosition(position); //set the new position of the sprite to be just where the sprite originally was
    
    p->stateMachine->changeState("Falling");
}
