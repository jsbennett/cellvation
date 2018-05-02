//
//  StateMachine.cpp
//  cellvasion
//
//  Created by Jay Bennett on 02/05/2018.
//

#include "StateMachine.hpp"

StateMachine::StateMachine(IState* startState)
{
    currentState = startState;
}

void StateMachine::add(string id, IState* state)
{
    states.insert(pair<string,IState*>(id, state)); //add the state to the map
}
void StateMachine::changeState(string id, cocos2d::Sprite* sprite, float delta)
{
    IState* nextState = states[id]; //set the next state to be the state to be changed to
    currentState = nextState; //set the current state to be the next state
    currentStateID = id; //set the current state id to be the next state
    cout << currentStateID << endl;
    currentState->update(sprite,delta);
}

void StateMachine::setCurrentState(IState* state)
{
    currentState = state;
}
