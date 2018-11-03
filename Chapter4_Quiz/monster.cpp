#include <iostream>
#include "monster.h"

namespace creatures
{
    std::string typeOfMonster(int type)
    {
        if (type == OGRE) return "Ogre";
        else if (type == DRAGON) return "Dragon";
        else if (type == ORC) return "Orc";
        else if (type == GIANT_SPIDER) return "Giant Spider";
        else if (type == SLIME) return "Slime";
        else return "Unknown monster";
    }

    void printMonster(Monster monster)
    {
        std::cout << "This " << typeOfMonster(static_cast<int>(monster.type)) << " is named " << monster.name;
        std::cout << " and has " << monster.health << " health." << '\n';
    }
}
