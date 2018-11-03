#include <iostream>
#include "monster.h"

namespace creatures
{
<<<<<<< HEAD
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
=======
    std::string typeOfMonster(int type)
    {
        if (type == OGRE) return "Ogre";
        else if (type == DRAGON) return "Dragon";
        else if (type == ORC) return "Orc";
        else if (type == GIANT_SPIDER) return "Giant Spider";
        else if (type == SLIME) return "Slime";
>>>>>>> 109f12075de2a55f6929312d03d63cec67eb2246
        else return "Unknown monster";
    }

    void printMonster(Monster monster)
    {
<<<<<<< HEAD
        std::cout << "This " << typeOfMonster(monster)
            << " is named " << monster.name
            << " and has " << monster.health << " health." << '\n';
=======
        std::cout << "This " << typeOfMonster(static_cast<int>(monster.type)) << " is named " << monster.name;
        std::cout << " and has " << monster.health << " health." << '\n';
>>>>>>> 109f12075de2a55f6929312d03d63cec67eb2246
    }
}
