#include <iostream>
#include "../include/Point3d.h"

using namespace std;

Point3d::Point3d()
{
    //ctor
}

void Point3d::print()
{
    cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << '\n';
}

void Point3d::setValues(double x,double y,double z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

bool Point3d::isEqual(Point3d &p)
{
    return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
}
