#ifndef CONDITION_H
#define CONDITION_H

namespace States {
    namespace Conditions {
        class Condition {
        public:
            bool virtual exec()=0;
        };
    }
}
#endif // CONDITION_H
