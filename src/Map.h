#ifndef MAPGEN_MAP_H
#define MAPGEN_MAP_H

#include <vector>

#include "Square.h"

class Map {
public:
    Map();
    Map(int width, int height);
    void printMap();

private:
    std::vector<std::vector<Square>> tiles;
    int width;
    int height;
};


#endif //MAPGEN_MAP_H
