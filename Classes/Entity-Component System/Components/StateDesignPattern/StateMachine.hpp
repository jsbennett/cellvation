//
//  StateMachine.hpp
//  cellvasion
//
//  Created by Jay Bennett on 03/05/2018.
//
// StateMachine: This is the state machine which holds all the states and controls the switching of states

#ifndef StateMachine_hpp
#define StateMachine_hpp

#include <stdio.h>
#include <map>
#include <string>
#include "IState.hpp"

using namespace std;

class StateMachine
{
public:
    IState* currentState; //holds the current state
    string* currentStateID; //holds the current state id
    
    StateMachine(void); //default constructor
    StateMachine(string startStateID, IState* startState); // constructor used to set up the state machine
    
    void addState(string stateID, IState* stateToAdd); //method to add a state
    void changeState(string stateID); //method to change a state

private:
    map<string,IState*> states; //a map data structure used to hold the state and its ID 
};

/*
template <class T>
StateMachine<T>::StateMachine()
{
    
}

template <class T>
StateMachine<T>::StateMachine(T startState)
{
    currentState = startState;
}
template<class T>
void StateMachine<T>::addState(string stateID, T stateToAdd)
{
    states.insert(pair<string,T>(stateID, stateToAdd));
}

template<class T>
void StateMachine<T>::changeState(string stateID)
{
    currentState.exit();
    T nextState = states[stateID];
    nextState.enter();
    currentState = nextState;
    currentStateID = stateID;
}*/

#endif /* StateMachine_hpp */
