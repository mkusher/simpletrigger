#include "map.h"

using namespace World;

Map::Map(int w, int h)
{
    width = w;
    height = h;
    fields.reserve(height);
    for(int i=0; i<height; ++i)
    {
        fields[i].reserve(width);
        for(int j = 0; j<width; ++j)
            fields[i].append(new Sector(i, j, this));
    }
}

Map::~Map()
{
    for(int i=0; i<height; ++i)
    {
        for(int j = 0; j<width; ++j)
            delete fields[i][j];
    }
}
