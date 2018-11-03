#include <iostream>
#include "monster.h"

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
    creatures::Monster m1{creatures::OGRE, "Torg", 145};
    creatures::Monster m2{creatures::SLIME, "Blurp", 23};

    creatures::printMonster(m1);
    creatures::printMonster(m2);
    return 0;
}
