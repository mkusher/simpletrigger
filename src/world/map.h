#ifndef MAP_H
#define MAP_H

#include "sector.h"
#include <QVector>

namespace World {
    class Map
    {
        QVector< QVector<Sector> > fields;
    public:
        Map();
    };
}
#endif // MAP_H
