#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED

namespace creatures
{
<<<<<<< HEAD
    enum class MonsterType
=======
    enum MonsterType
>>>>>>> 109f12075de2a55f6929312d03d63cec67eb2246
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

<<<<<<< HEAD
    std::string typeOfMonster(Monster monster);
=======
    std::string typeOfMonster(int type);
>>>>>>> 109f12075de2a55f6929312d03d63cec67eb2246
    void printMonster(Monster monster);
}

#endif // MONSTER_H_INCLUDED
