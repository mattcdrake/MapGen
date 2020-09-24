#include <iostream>
#include <string>

#include "UserSettings.h"

#define DEFAULT_MAP_MIN_DIMENSION 32

UserSettings::UserSettings() : mapWidth{0}, mapHeight{0} {}

int UserSettings::getDimensionFromUser(const std::string &label, int min, int max) {
    if (min <= DEFAULT_MAP_MIN_DIMENSION) {
        std::cout << label << " cannot be smaller than " << DEFAULT_MAP_MIN_DIMENSION << std::endl;
    }

    std::string userInput;
    int userInt {0};
    bool keepGoing {true};

    while (keepGoing) {
        std::cout << "What should your map's " << label << " be?" << std::endl;
        std::cout << "Enter a number between " << min << " and " << max << "." << std::endl;
        std::getline(std::cin, userInput);
        keepGoing = !UserSettings::copyIfValidInt(userInput, userInt, min, max, label);
    }

    return userInt;
}

void UserSettings::getSettingsFromUser() {
    mapWidth = UserSettings::getDimensionFromUser("width", 64, 256);
    mapHeight = UserSettings::getDimensionFromUser("height", 24, 50);
}

int UserSettings::getMapWidth() const {
    return mapWidth;
}

int UserSettings::getMapHeight() const {
    return mapHeight;
}

bool UserSettings::copyIfValidInt(const std::string &input, int &output, const int &min,
                                  const int &max, const std::string &label) {
    int temp;
    try {
        temp = std::stoi(input);
    } catch (std::exception& e) {
        std::cout << "Please type a number between " << min << " and " << max << std::endl;
        return false;
    }

    if (temp < min) {
        std::cout << "Map " << label << " can't be less than " << min << std::endl;
        return false;
    }
    if (temp > max) {
        std::cout << "Map " << label << " can't be more than " << max << std::endl;
        return false;
    }

    output = temp;
    return true;
}

void UserSettings::printSettings() const {
    std::cout << "w: " << mapWidth << ", h: " << mapHeight << std::endl;
}
