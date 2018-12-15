//
// Created by alex on 15/12/18.
//

#include "Point.h"

std::ostream &operator<<(std::ostream &out, const Point &p) {
    out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
    return out;
}

Point::Point(int x, int y, int z)
        : m_x(x), m_y(y), m_z(z)
{

}
