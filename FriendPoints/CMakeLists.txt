cmake_minimum_required(VERSION 3.12)
project(FriendPoints)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(FriendPoints
        main.cpp
        point3d.cpp
        point3d.h
        vector3d.cpp
        vector3d.h)
