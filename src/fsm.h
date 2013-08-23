#ifndef FSM_H
#define FSM_H

#include "states/state.h"

using namespace States;

class FSM {

    State* currentState;

public:
    FSM* setCurrentState(State*);
    State* getCurrentState();
};

#endif // FSM_H
