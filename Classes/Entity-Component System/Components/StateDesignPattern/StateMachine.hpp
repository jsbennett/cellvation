//
//  StateMachine.hpp
//  cellvasion
//
//  Created by Jay Bennett on 02/05/2018.
// Purpose: This is a template for a state machine. Its a template so I will be able to specify what type of state machine I want to create e.g. player state machine, or a enemy state machine

#ifndef StateMachine_hpp
#define StateMachine_hpp

#include <stdio.h>
#include <map>
#include <string>
#include "IState.hpp"
#include <iostream> 
using namespace std;

class StateMachine
{
public:
    //variables
    map<string,IState*> states; //using a map to store all the states and its corresponding ID
    IState* currentState; //used to store the current state
    string currentStateID; //used to store the current state ID
    
    StateMachine(IState* startState); //constructor to set the start state
    void add(string id, IState* state); //used to add a state to the machine
    void changeState(string id, cocos2d::Sprite* sprite, float delta); //used to change the current state in the machine
    void setCurrentState(IState* state);
    
};

/*template<class T>
void StateMachine<T>::add(string id, T state)
{
    states.insert(make_pair(id, state)); //add the state to the map
}

template<class T>
void StateMachine<T>::changeState(string id, cocos2d::Sprite* sprite, float delta)
{
    T nextState = states[id]; //set the next state to be the state to be changed to
    currentState = nextState; //set the current state to be the next state
    currentStateID = id; //set the current state id to be the next state
    currentState.update(sprite,delta);
}


template<class T>
void StateMachine<T>::setCurrentState(T state)
{
    currentState = state;
}*/
#endif /* StateMachine_hpp */

