#include <iostream>
#include "monster.h"

namespace creatures
{
    std::string typeOfMonster(Monster monster)
    {
        if (monster.type == MonsterType::OGRE)
            return "Ogre";
        else if (monster.type == MonsterType::DRAGON)
            return "Dragon";
        else if (monster.type == MonsterType::ORC)
            return "Orc";
        else if (monster.type == MonsterType::GIANT_SPIDER)
            return "Giant Spider";
        else if (monster.type == MonsterType::SLIME)
            return "Slime";
        else return "Unknown monster";
    }

    void printMonster(Monster monster)
    {
        std::cout << "This " << typeOfMonster(monster)
            << " is named " << monster.name
            << " and has " << monster.health << " health." << '\n';
    }
}
