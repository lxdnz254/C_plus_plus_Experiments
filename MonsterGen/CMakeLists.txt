cmake_minimum_required(VERSION 3.12)
project(MonsterGen)

set(CMAKE_CXX_STANDARD 14)

add_executable(MonsterGen main.cpp Monster.cpp Monster.h MonsterGenerator.cpp MonsterGenerator.h)