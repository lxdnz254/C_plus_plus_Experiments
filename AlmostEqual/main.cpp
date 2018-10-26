#include <iostream>
#include "approximate.h"

using namespace std;

int main()
{
    cout << "Hello user!" << endl;

    // a is really close to 1.0, but has rounding errors
    double a = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

    std::cout << approx::approximatelyEqual(a, 1.0, 1e-8) << "\n";     // compare "almost 1.0" to 1.0
    std::cout << approx::approximatelyEqual(a-1.0, 0.0, 1e-8) << "\n"; // compare "almost 0.0" to 0.0
    std::cout << approx::approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << "\n"; // compare "almost 0.0" to 0.0

    return 0;
}
