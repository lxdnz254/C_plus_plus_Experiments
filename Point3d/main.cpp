#include <iostream>

using namespace std;

class Point3d
{
    public:

        void setValues(double x, double y, double z)
        {
            m_x = x;
            m_y = y;
            m_z = z;
        }
        void print()
        {
            cout << "<" << m_x << ", " << m_y << ", " << m_z << ">" << '\n';
        }

        bool isEqual(const Point3d &p)
        {
            return m_x == p.m_x && m_y == p.m_y && m_z == p.m_z;
        }

    protected:

    private:
        double m_x; //!< Member variable "m_x"
        double m_y; //!< Member variable "m_y"
        double m_z; //!< Member variable "m_z"
};

int main()
{
    cout << "Hello world!" << endl;
    Point3d point1;
    point1.setValues(1.0, 2.0, 3.0);

    Point3d point2;
    point2.setValues(1.0, 2.0, 3.0);

    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";

    Point3d point3;
    point3.setValues(3.0, 4.0, 5.0);

    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";

    return 0;
}
