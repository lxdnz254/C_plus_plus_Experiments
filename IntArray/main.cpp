#include <iostream>
#include "IntArray.h"

IntArray fillArray() {
    IntArray a(5);
    a[0] = 5;
    a[1] = 8;
    a[2] = 2;
    a[3] = 3;
    a[4] = 6;

    return a;
}

int main() {
    IntArray a = fillArray();
    std::cout << a << '\n';

    IntArray b(1);
    a = a;
    b = a;

    std::cout << b << '\n';

    return 0;
}

/**
Outputs:
 5 8 2 3 6
 5 8 2 3 6
 */