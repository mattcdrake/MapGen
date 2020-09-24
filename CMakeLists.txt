cmake_minimum_required(VERSION 3.17)
project(MapGen)

set(CMAKE_CXX_STANDARD 14)

add_executable(MapGen src/main.cpp src/UserSettings.cpp src/UserSettings.h src/Map.cpp src/Map.h src/Square.cpp src/Square.h)