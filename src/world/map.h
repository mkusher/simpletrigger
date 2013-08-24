#ifndef MAP_H
#define MAP_H

#include "sector.h"
#include <QVector>

namespace World {

    class Sector;
    class Map
    {
        int width, height;
        QVector< QVector< Sector* > > fields;
    public:
        Map();
        Map(int, int);

        ~Map();
    };
}
#endif // MAP_H
