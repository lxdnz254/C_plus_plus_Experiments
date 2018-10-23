#include <iostream>

using namespace std;

int readNumber();

void writeAnswer(int x);

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
