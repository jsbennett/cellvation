//
//  FallingMoveState.cpp
//  cellvasion
//
//  Created by Jay Bennett on 04/05/2018.
//

#include "FallingMoveState.hpp"
#include <iostream>

FallingMoveState::FallingMoveState()
{
}

FallingMoveState::FallingMoveState(Player* p) : ICharacterState(p)
{
}

void FallingMoveState::enter()
{
}

void FallingMoveState::exit()
{
}

//update function which moves the player down
void FallingMoveState::update(float delta)
{
    std::cout << "Falling" << std::endl;
    
    auto position = p->sprite->getPosition(); //get the position of the player
    position.x =  position.x + 0;
    position.y = position.y - 100 * delta;
    p->sprite->setPosition(position); //set the new position of the sprite to be just where the sprite originally was
    
    p->stateMachine->changeState("Standing");
}
