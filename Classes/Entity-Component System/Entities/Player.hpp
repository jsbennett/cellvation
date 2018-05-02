//
//  Player.hpp
//  cellvasion
//
//  Created by Jay Bennett on 01/05/2018.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#include "GameCharacterObject.hpp"
#include "StateMachine.hpp"
#include "IState.hpp"
#include "LeftMoveState.hpp"


class Player : public GameCharacterObject
{
private:
    int health; //the health value for the character
    int speed; //the speed value for the character
    StateMachine stateMachine; //create a state machine to hold the states of the player
    
public:
    //constructor
    Player(int health, int speed, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p);
    void update(string state, float delta);
    //void setState(string state); 
    
};

#endif /* Player_hpp */
