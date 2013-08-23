#ifndef CONDITION_H
#define CONDITION_H

namespace States {
    namespace Conditions {
        class Condition {
        public:
            virtual bool exec()=0;
        };
    }
}
#endif // CONDITION_H
