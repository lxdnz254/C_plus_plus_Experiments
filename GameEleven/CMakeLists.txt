cmake_minimum_required(VERSION 3.12)
project(GameEleven)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameEleven main.cpp Creature.cpp Creature.h Player.cpp Player.h Monster.cpp Monster.h)