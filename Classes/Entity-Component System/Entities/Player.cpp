//
//  Player.cpp
//  cellvasion
//
//  Created by Jay Bennett on 01/05/2018.
//

#include "Player.hpp"
#include <string>
#include <iostream>
#include "LeftMoveState.hpp"
#include "RightMoveState.hpp"
#include "StandingMoveState.hpp"
#include "JumpingMoveState.hpp"
#include "FallingMoveState.hpp"

using namespace std;

Player::Player()
{

}

//the game character object constructor has to take in values for the parent constrcutor (game object) and has to define them.
Player::Player(int healthValue, int speedValue, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p) : GameCharacterObject(healthValue,speedValue, spriteFile, scene, p)
{
    stateMachine = new StateMachine("Initial", new StandingMoveState(this));
    stateMachine->addState("Left", new LeftMoveState(this));
    stateMachine->addState("Right", new RightMoveState(this));
    stateMachine->addState("Standing", new StandingMoveState(this));
    stateMachine->addState("Jumping", new JumpingMoveState(this));
    stateMachine->addState("Falling", new FallingMoveState(this));
}


void Player::update(float delta)
{
    stateMachine->currentState->update(delta);
    /*position.y--;
    sprite->setPosition(position.x, position.y);
    cout << position.y << endl;*/
}

