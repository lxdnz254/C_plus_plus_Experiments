//
// Created by alex on 15/12/18.
//

#ifndef CHAPTER12_CIRCLE_H
#define CHAPTER12_CIRCLE_H


#include "Shape.h"
#include "Point.h"

class Circle: public Shape {

private:
    Point c_Point;
    int c_radius;

public:
    Circle(const Point &c1, int radius);
    std::ostream& print(std::ostream &out) const override;
    int getRadius() const;
};


#endif //CHAPTER12_CIRCLE_H
