cmake_minimum_required(VERSION 3.12)
project(FruitInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(FruitInheritance main.cpp Fruit.cpp Fruit.h Apple.cpp Apple.h Banana.cpp Banana.h)