#include <iostream>
#include <cstdlib> // for srand() and rand()
#include "Player.h"
#include "Monster.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    rand(); // get rid of first result

    for (int i = 0; i < 10; ++i)
    {
        Monster m = Monster::getRandomMonster();
        std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
    }

    return 0;
}