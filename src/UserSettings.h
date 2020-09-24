#ifndef MAPGEN_USER_SETTINGS_H
#define MAPGEN_USER_SETTINGS_H

class UserSettings {
public:
    UserSettings();
    static int getDimensionFromUser(const std::string &label, int min, int max);
    void getSettingsFromUser();
    int getMapWidth() const;
    int getMapHeight() const;
    void printSettings() const;

private:
    int mapWidth;
    int mapHeight;
    static bool copyIfValidInt(const std::string &input, int &output, const int &min,
                               const int &max, const std::string &label);
};

#endif //MAPGEN_USER_SETTINGS_H
