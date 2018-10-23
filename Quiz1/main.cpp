#include <iostream>
#include "io.h"

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    int x;
    int y;
    x = readNumber();
    y = readNumber();
    writeAnswer(x+y);
    return 0;
}
