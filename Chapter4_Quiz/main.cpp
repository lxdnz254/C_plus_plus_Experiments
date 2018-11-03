#include <iostream>
#include "monster.h"

using namespace std;

int main()
{
    cout << "Hello user!" << endl;
<<<<<<< HEAD
    creatures::Monster m1{creatures::MonsterType::OGRE, "Torg", 145};
    creatures::Monster m2{creatures::MonsterType::SLIME, "Blurp", 23};
=======
    creatures::Monster m1{creatures::OGRE, "Torg", 145};
    creatures::Monster m2{creatures::SLIME, "Blurp", 23};
>>>>>>> 109f12075de2a55f6929312d03d63cec67eb2246

    creatures::printMonster(m1);
    creatures::printMonster(m2);
    return 0;
}
