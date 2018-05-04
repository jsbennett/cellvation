//
//  Player.hpp
//  cellvasion
//
//  Created by Jay Bennett on 01/05/2018.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "StateMachine.hpp"
#include "GameCharacterObject.hpp"

class Player : public GameCharacterObject
{
private:
    int health; //the health value for the character
    int speed; //the speed value for the character
    
    
public:
    //constructor
    Player(void); 
    Player(int health, int speed, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p);
    void update(float delta);
    
    StateMachine* stateMachine;
};

#endif /* Player_hpp */
