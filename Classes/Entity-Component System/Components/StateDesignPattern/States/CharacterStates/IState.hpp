//
//  IState.hpp
//  cellvasion
//
//  Created by Jay Bennett on 03/05/2018.
//
// IState - a generic interface for a state 

#ifndef IState_hpp
#define IState_hpp

#include <stdio.h>

class IState
{
public:
    virtual void enter(); //empty generic enter method
    virtual void exit(); //empty generic exit method
    virtual void update(float delta); //empty generic update method
};
#endif /* IState_hpp */
