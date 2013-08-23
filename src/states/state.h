#ifndef STATE_H
#define STATE_H

#include <QMap>

#include "fsm.h"
#include "conditions/condition.h"

namespace States {

    using namespace Conditions;

    class State;
    class State {

        FSM* machine;
        QMap<Condition*, State*> relations;
    public:
        virtual State* start()=0;
        virtual State* end()=0;
        virtual State* beforeExec()=0;
        virtual State* afterExec()=0;

        virtual State* exec()=0;
    };

}
#endif // STATE_H
