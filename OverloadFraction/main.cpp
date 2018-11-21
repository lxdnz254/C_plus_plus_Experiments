#include <iostream>
#include "Fraction.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Fraction f1(4, 10);
    f1.print();

    Fraction f2(3, 8);
    f2.print();

    Fraction f3 = f1 * f2;
    f3.print();

    Fraction f4 = f1 * 2;
    f4.print();

    Fraction f5 = 2 * f2;
    f5.print();

    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();
    return 0;
}

/**
   Outputs:

    Hello, World!
    2/5
    3/8
    3/20
    4/5
    3/4
    1/4
*/