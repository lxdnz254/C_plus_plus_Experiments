//
// Created by alex on 15/12/18.
//

#ifndef CHAPTER12_TRIANGLE_H
#define CHAPTER12_TRIANGLE_H

#include "Point.h"
#include "Shape.h"


class Triangle: public Shape {

private:
    Point point1;
    Point point2;
    Point point3;

public:
    Triangle(const Point &p1, const Point &p2, const Point &p3);
    std::ostream& print(std::ostream &out) const override;
};


#endif //CHAPTER12_TRIANGLE_H
