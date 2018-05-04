//
//  GameObject.hpp
//  cellvasion
//
//  Created by Jay Bennett on 30/03/2018.
//
// The h file for a game object in the game

#ifndef GameObject_hpp
#define GameObject_hpp

#include <stdio.h>
#include <string>
using namespace std;

class GameObject
{
private:
    int id; //an ID to reference the entity
    
public:
    GameObject(void); 
    GameObject(string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p); //create the game object and
    cocos2d::Sprite* sprite; //Each entity has a sprite
    cocos2d::Vec2 position; //the position of the sprite
    
    //getters and setters of the id for the game object
    void setID(int id);
    int getID();
    
    //update loop for the game object
    void update(float delta);
};
#endif /* GameObject_hpp */


