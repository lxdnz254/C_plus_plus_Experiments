#include <iostream>

using namespace std;

bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    cout << "Hello user!" << endl;
    cout << "Enter an integer: ";
    int x;
    cin >> x;
    if (isEven(x))
        cout << "The number " << x << " is even." << '\n';
    else
        cout << "The number " << x << " is odd." << '\n';

    return 0;
}
