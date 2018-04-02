//
//  GameCharacterObject.cpp
//  cellvasion
//
//  Created by Jay Bennett on 02/04/2018.
//

#include "GameCharacterObject.hpp"

//the game character object constructor has to take in values for the parent constrcutor (game object) and has to define them.
GameCharacterObject::GameCharacterObject(int healthValue, int speedValue, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p) : GameObject(spriteFile,scene,p)
{
    this->health = healthValue; //set the health
    this->speed = speedValue; //set the speed
}

//this function is used to return the current speed that the  object is moving at
int GameCharacterObject::getSpeed()
{
    return this->speed;
}

//this function is used to set the speed that the object is moving at
void GameCharacterObject::setSpeed(int speedValue)
{
    this->speed = speedValue;
}

//this function is used to get the current health value of the object
int GameCharacterObject::getHealth()
{
    return this->health;
}

//this function is used to set the health value of the object
void GameCharacterObject::setHealth(int healthValue)
{
    this->health = healthValue;
}
