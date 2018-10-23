#include <iostream>

using namespace std;

int readNumber()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    return a;
}

void writeAnswer(int x)
{
    cout << "Answer is: " << x << endl;
}

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
