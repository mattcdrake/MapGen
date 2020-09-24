#ifndef MAPGEN_SQUARE_H
#define MAPGEN_SQUARE_H

enum Terrain { Wall, Floor };

class Square {
public:
    Square();
    explicit Square(Terrain terrain);
    Terrain getTerrain();
private:
    Terrain terrainType;
};

#endif //MAPGEN_SQUARE_H
