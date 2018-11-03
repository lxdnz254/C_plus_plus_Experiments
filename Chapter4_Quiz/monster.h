#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED

namespace creatures
{
    enum MonsterType
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

    std::string typeOfMonster(int type);
    void printMonster(Monster monster);
}

#endif // MONSTER_H_INCLUDED
