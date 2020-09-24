#include <iostream>

#include "Map.h"

Map::Map() : width{0}, height{0} {}

Map::Map(int width, int height) : width{width}, height{height} {
    for (int i = 0; i < height; ++i) {
        std::vector<Square> row;
        tiles.push_back(row);
        for (int j = 0; j < width; ++j) {
            tiles[i].push_back(Square(Terrain::Floor));
        }
    }
}

void Map::printMap() {
    for (auto& row : tiles) {
        for (auto& square : row) {
            auto sq_terrain = square.getTerrain();

            if (sq_terrain == Terrain::Floor) {
                std::cout << ".";
            } else if (sq_terrain == Terrain::Wall) {
                std::cout << "X";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "there's the dungeon" << std::endl;
}