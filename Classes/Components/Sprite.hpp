//
//  GameSprite.hpp
//  cellvasion
//
//  Created by Jay Bennett on 30/03/2018.
//

#ifndef Sprite_hpp
#define Sprite_hpp

#include <stdio.h>
#include "Scale.hpp"
#include "Rotation.hpp"
#include "cocos2d.h"

class GameSprite
{
public:
    GameSprite();
    Scale* scale;
    Rotation* rotation;
    cocos2d::Sprite* texture;
    
    void draw();
    void update();
}; 
#endif /* Sprite_hpp */
