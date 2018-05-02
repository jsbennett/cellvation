//
//  LeftMoveState.cpp
//  cellvasion
//
//  Created by Jay Bennett on 02/05/2018.
//

#include "LeftMoveState.hpp"
#include <iostream>
using namespace std;

void LeftMoveState::update(cocos2d::Sprite* sprite, float delta) {
    cout << "here" << endl; 
    auto position = sprite->getPosition(); //get the postion of the sprite
    position.x -= 100 * delta; //move the sprite to the left i.e reduce the x co-ordinate
    //position.y += 0; //keep the y co-ordinate the same
    sprite->setPosition(position); //set the sprites position
   
    /*position.y--;
    sprite->setPosition(position.x, position.y);
    cout << position.y << endl;*/
}
