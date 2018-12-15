//
// Created by alex on 15/12/18.
//
#include <cstdlib>
#include "Monster.h"

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
        {"Dragon", 'D', 20, 4, 100},
        {"Orc", 'o', 4, 2, 25},
        {"Slime", 's', 1, 1, 10}
};

Monster::Monster(Monster::Type type) : Creature(monsterData[type].m_name, monsterData[type].m_symbol,
                                                monsterData[type].m_health, monsterData[type].m_damage,
                                                monsterData[type].m_gold)
{}

Monster Monster::getRandomMonster() {
    return Monster(static_cast<Type>(getRandomNumber(0, MAX_TYPES-1)));
}

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int Monster::getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

