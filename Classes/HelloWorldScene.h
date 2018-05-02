#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
//#include "GameObject.hpp"
//#include "GameCharacterObject.hpp"
#include "Player.hpp"
#include "GamePickupObject.hpp"
class HelloWorld : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    //GameObject* gameObject;
    //GameCharacterObject* gameCharacterObject;
    Player* player;
    
    GamePickupObject* gamePickup;
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void update(float delta); 
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
