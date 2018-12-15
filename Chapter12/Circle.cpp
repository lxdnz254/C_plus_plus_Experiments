//
// Created by alex on 15/12/18.
//

#include "Circle.h"

std::ostream &Circle::print(std::ostream &out) const {
    out << "Circle(" << c_Point << ", " << c_radius << ")";
    return out;
}

Circle::Circle(const Point &c1, int radius): c_Point(c1), c_radius(radius) {

}

int Circle::getRadius() const {
    return c_radius;
}
