//
//  GameCharacterObject.hpp
//  cellvasion
//
//  Created by Jay Bennett on 02/04/2018.
//
// This class is the standard class which the characters in the game are derived from.

#ifndef GameCharacterObject_hpp
#define GameCharacterObject_hpp

#include "GameObject.hpp"

//this class inherits the classes from GameObject since the characters are also game objects and require to be displayed and updated
class GameCharacterObject : public GameObject
{
private:
    int health; //the health value for the character
    int speed; //the speed value for the character
    
public:
    //constructor
    GameCharacterObject(int health, int speed, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p);
    //the getter and setters for the health and speed for the character
    int getSpeed();
    void setSpeed(int speedValue);
    int getHealth();
    void setHealth(int healthValue);
};
#endif /* GameCharacterObject_hpp */
