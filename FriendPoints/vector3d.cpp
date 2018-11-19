#include <iostream>
#include "vector3d.h"

Vector3d::Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x(x), m_y(y), m_z(z)
{
    //ctor
}

void Vector3d::print()
{
    std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")" << '\n';
}
