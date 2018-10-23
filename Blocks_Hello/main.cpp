#include <iostream>
#include <limits>
#include "add.h"

using namespace std;

int main()
{
    cout << "Hello world! From Codeblocks" << endl;

    cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return 0;
}
