#ifndef CHARACTER_H
#define CHARACTER_H

namespace Characters {
    class Character {
        double healthPoints;
        double strength;

    public:
        double getStrength();
        double getHealthPoints();
    };
}

#endif // CHARACTER_H
