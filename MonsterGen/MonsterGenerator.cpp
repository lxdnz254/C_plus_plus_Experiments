//
// Created by alex on 21/11/18.
//

#include "MonsterGenerator.h"


// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int MonsterGenerator::getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monster MonsterGenerator::generateMonster() {

    auto r_Type = static_cast<Monster::MonsterType>(MonsterGenerator::getRandomNumber(0, Monster::MAX_MONSTER_TYPE-1));
    int r_Hp = MonsterGenerator::getRandomNumber(0, 100);

    static std::string s_names[6]{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };
    static std::string s_roars[6]{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*"};

    return Monster(r_Type, s_names[getRandomNumber(0,5)], s_roars[getRandomNumber(0,5)], r_Hp);
}

