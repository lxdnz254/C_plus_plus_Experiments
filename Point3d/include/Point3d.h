#ifndef POINT3D_H
#define POINT3D_H


class Point3d
{
    public:
        /** Default constructor */
        Point3d();
        void setValues(double x,double y,double z);
        void print();
        bool isEqual(Point3d &p);

    protected:

    private:
        double m_x; //!< Member variable "m_x"
        double m_y; //!< Member variable "m_y"
        double m_z; //!< Member variable "m_z"
};

#endif // POINT3D_H
