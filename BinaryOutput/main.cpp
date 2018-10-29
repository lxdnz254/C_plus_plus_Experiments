#include <iostream>
#include "printBinary.h"

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    cout << "Enter an integer between 0 - 255: ";
    int x;
    cin >> x;

    x = printAndDecrement(x, 128);
    x = printAndDecrement(x, 64);
    x = printAndDecrement(x, 32);
    x = printAndDecrement(x, 16);

    cout << " ";

    x = printAndDecrement(x, 8);
    x = printAndDecrement(x, 4);
    x = printAndDecrement(x, 2);
    x = printAndDecrement(x, 1);

    return 0;
}
