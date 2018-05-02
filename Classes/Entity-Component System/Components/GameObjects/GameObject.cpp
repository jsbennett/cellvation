//
//  GameObject.cpp
//  cellvasion
//
//  Created by Jay Bennett on 30/03/2018.
//

#include "GameObject.hpp"
#include <iostream>
using namespace std;

//The constructor which sets up the starting point for the game object
GameObject::GameObject(string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p)
{
    sprite = cocos2d::Sprite::create(spriteFile); //create the new sprite
    //position = new cocos2d::Vec2(200,200);
    position = p; //get the start position
    sprite->setPosition(position.x, position.y); //set the start poistion
    scene->addChild(sprite); //add it to the scene
}

//update object for all game objects e.g animation, collision detection
//update method used as the basic implementation of an update loop for each object
void GameObject::update(float delta)
{
    //this is just some sample code making the sprite move down
    /*position.y--;
    sprite->setPosition(position.x, position.y);
    cout << position.y << endl;*/
}

