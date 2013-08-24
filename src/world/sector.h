#ifndef SECTOR_H
#define SECTOR_H

#include "map.h"



namespace World {

    class Map;
    class Sector
    {
        Map* m;

    public:
        Sector();
        Sector(int, int, Map*);

        Sector* setX(int);
        Sector* setY(int);
        Sector* setMap(Map*);
        Sector* getLeft();
        Sector* getRight();
        Sector* getUp();
        Sector* getDown();
    };
}
#endif // SECTOR_H
