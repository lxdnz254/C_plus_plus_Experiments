cmake_minimum_required(VERSION 3.12)
project(Chapter12)

set(CMAKE_CXX_STANDARD 14)

add_executable(Chapter12 main.cpp Shape.cpp Shape.h Point.cpp Point.h Triangle.cpp Triangle.h Circle.cpp Circle.h)