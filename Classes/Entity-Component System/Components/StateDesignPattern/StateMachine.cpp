//
//  StateMachine.cpp
//  cellvasion
//
//  Created by Jay Bennett on 03/05/2018.
//

#include "StateMachine.hpp"

//the default constructor
StateMachine::StateMachine()
{
    
}

//constructor which takes in an id and a state to initalise the state machine
StateMachine::StateMachine(string startStateID, IState* startState)
{
    currentState = startState; //set the current state to the start state
    currentStateID = &startStateID; //set the current state id to be the start states id
}

//method to add a state to the state machine - takes in an id for the state and the state to be added
void StateMachine::addState(string stateID, IState *stateToAdd)
{
    states.insert(make_pair(stateID, stateToAdd)); //add the states to the map
}

//method to change the state in the state machine - takes in the string id to change state to
void StateMachine::changeState(string changeStateID)
{
    currentState->exit(); //call the exit code for the state i.e exit animation
    IState* nextState = states.at(changeStateID); //set the next state to be the state corresponding to the state id
    nextState->enter(); //call the enter code for the state i.e the start animation
    
    currentStateID = &changeStateID; //set the current id to be the id of the state being changed to
    currentState = nextState; //set the current state to be the changed state 
}

