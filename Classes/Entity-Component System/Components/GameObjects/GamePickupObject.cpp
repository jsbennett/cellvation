//
//  GamePickupObject.cpp
//  cellvasion-mobile
//
//  Created by Jay Bennett on 02/04/2018.
//

#include "GamePickupObject.hpp"
//the game pickup object constructor has to take in values for the parent constrcutor (game object) and has to define them.
GamePickupObject::GamePickupObject(int inputValue, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p) : GameObject(spriteFile,scene,p)
{
    this->value = inputValue; //set the value of the pickup
}

int GamePickupObject::getValue(){
    return this->value;
}

void GamePickupObject::setValue(int inputValue)
{
    this->value = inputValue;
}

