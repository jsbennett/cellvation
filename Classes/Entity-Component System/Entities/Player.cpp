//
//  Player.cpp
//  cellvasion
//
//  Created by Jay Bennett on 01/05/2018.
//

#include "Player.hpp"
#include "LeftMoveState.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

//the game character object constructor has to take in values for the parent constrcutor (game object) and has to define them.
Player::Player(int healthValue, int speedValue, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p) : GameCharacterObject(healthValue,speedValue, spriteFile, scene, p), stateMachine(new LeftMoveState())
{
    
    stateMachine.add("Left",new LeftMoveState());
    
}


void Player::update(string state, float delta)
{
    /*LeftMoveState left;
    left.update(sprite,delta);*/
    stateMachine.changeState(state,sprite,delta);
    /*IState current = this->stateMachine.currentState;
    cocos2d::Sprite* temp = this->sprite;
    cout << stateMachine.currentStateID << endl;
    //current.update(temp, delta);*/
    /*position.y--;
    sprite->setPosition(position.x, position.y);
    cout << position.y << endl;*/
}

/*void Player::setState(string state)
{
    float delta;
    this->stateMachine.changeState(state);
    //this->update(delta);
}*/
