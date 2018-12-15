//
// Created by alex on 15/12/18.
//

#include "Triangle.h"

Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3): point1(p1), point2(p2), point3(p3) {

}

std::ostream &Triangle::print(std::ostream &out) const {
    out << "Triangle(" << point1 << ", " << point2 << ", " << point3 << ")";
    return out;
}
