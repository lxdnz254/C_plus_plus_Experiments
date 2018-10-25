#include <iostream>
#include "constants.h"

using namespace std;

int getInitialHeight()
{
    cout << "Enter the height of the tower in meters: ";
    int h;
    cin >> h;
    return h;
}

double calculateNewHeight(int secs, double initialHeight)
{
    double newHeight = initialHeight - (myConstants::gravity * secs * secs / 2);

    return newHeight;
}

void printResult(int secs, double height)
{
    double newHeight = calculateNewHeight(secs, height);
    if (newHeight > 0)
    {
        cout << "At " << secs << " seconds, the ball is at height: " << newHeight << " meters" << '\n';
        secs++;
        printResult(secs, height);
    }
    else
    {
        cout << "At " << secs << " seconds, the ball is on the ground!" << endl;
    }
}

int main()
{
    cout << "Hello user!" << endl;
    const int height = getInitialHeight();
    printResult(0, height);

    return 0;
}
