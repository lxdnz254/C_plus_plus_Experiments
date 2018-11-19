#include <iostream>
#include "point3d.h"
#include "vector3d.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);

    p.print();
    p.moveByVector(v);
    p.print();

    return 0;
}
