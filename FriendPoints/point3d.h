#ifndef POINT3D_H
#define POINT3D_H

class Vector3d;

class Point3d
{
    public:
        Point3d(double x, double y, double z);
        virtual ~Point3d();
        void print();
        void moveByVector(const Vector3d &v);

    protected:

    private:
        double m_x, m_y, m_z;
};

#endif // POINT3D_H
