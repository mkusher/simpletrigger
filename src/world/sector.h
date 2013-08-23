#ifndef SECTOR_H
#define SECTOR_H

#include "map.h"

namespace World {
    class Sector
    {
        Map* map;
    public:
        Sector(int, int);
    };
}
#endif // SECTOR_H
