#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "point3d.h"

class Vector3d
{
    public:
        Vector3d(double x, double y, double z);
        void print();
        friend void Point3d::moveByVector(const Vector3d &v);

    protected:

    private:
        double m_x, m_y, m_z;
};

#endif // VECTOR3D_H
