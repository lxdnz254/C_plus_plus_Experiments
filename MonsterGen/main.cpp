#include <iostream>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include "MonsterGenerator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    rand(); // If using Visual Studio, discard first random value

    Monster m = MonsterGenerator::generateMonster();
    m.print();

    return 0;
}