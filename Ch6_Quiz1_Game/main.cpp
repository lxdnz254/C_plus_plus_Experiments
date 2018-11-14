#include <iostream>
#include "Items.h"

using namespace std;

int main()
{
    cout << "Hello player!" << endl;
    int items[MAX_ITEMS]{2,5,10};

    cout << "The player has " << countTotalItems(items) << " items";
    return 0;
}
