//
//  GamePickupObject.hpp
//  cellvasion-mobile
//
//  Created by Jay Bennett on 02/04/2018.
//

#ifndef GamePickupObject_hpp
#define GamePickupObject_hpp

#include "GameObject.hpp"

//this class inherits the classes from GameObject since the pickups are also game objects and require to be displayed and updated
class GamePickupObject : public GameObject
{
private:
    int value; //store the value of the pickup
    
public:
    //constructor
    GamePickupObject(int value, string spriteFile, cocos2d::Scene* scene, cocos2d::Vec2 p);
    //the getter and setters for the value of the pickup
    int getValue();
    void setValue(int value);
};
#endif /* GamePickupObject_hpp */
