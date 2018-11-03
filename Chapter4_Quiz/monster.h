#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED

namespace creatures
{
    enum class MonsterType
    {
        OGRE,
        DRAGON,
        ORC,
        GIANT_SPIDER,
        SLIME,
    };

    struct Monster
    {
        MonsterType type;
        std::string name;
        int health;
    };

    std::string typeOfMonster(Monster monster);
    void printMonster(Monster monster);
}

#endif // MONSTER_H_INCLUDED
