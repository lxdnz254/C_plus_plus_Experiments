#include <iostream>
#include "advertising.h"

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    Advertising ad = getAdvertising();
    printAdvertising(ad);

    return 0;
}
