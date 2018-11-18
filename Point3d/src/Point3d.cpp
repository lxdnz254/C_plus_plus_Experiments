#include "Point3d.h"

using namespace std;

Point3d::Point3d()
{
    //ctor
}

Point3d::print()
{
    cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << '\n';
}

Point3d::setValues(double x,y,z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}
