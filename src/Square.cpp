#include "Square.h"

Square::Square() {
    terrainType = Terrain::Floor;
}

Square::Square(Terrain terrain) {
    terrainType = terrain;
}

Terrain Square::getTerrain() {
    return terrainType;
}