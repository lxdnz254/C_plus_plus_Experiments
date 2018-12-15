//
// Created by alex on 15/12/18.
//

#ifndef CHAPTER12_POINT_H
#define CHAPTER12_POINT_H


#include <iostream>

class Point {
private:
    int m_x = 0;
    int m_y = 0;
    int m_z = 0;

public:
    Point(int x, int y, int z);

    friend std::ostream& operator<<(std::ostream &out, const Point &p);
};


#endif //CHAPTER12_POINT_H
