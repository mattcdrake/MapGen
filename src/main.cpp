#include <iostream>

#include "Map.h"
#include "UserSettings.h"

#define MAPGEN_VERSION "v0.1"

int main() {
    std::cout << "MapGen " << MAPGEN_VERSION << std::endl;
    std::cout << "-----------" << std::endl;

    UserSettings settings{};
    settings.getSettingsFromUser();

    Map newMap{settings.getMapWidth(), settings.getMapHeight()};
    newMap.printMap();

    return 0;
}
