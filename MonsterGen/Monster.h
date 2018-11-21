//
// Created by alex on 21/11/18.
//

#ifndef MONSTERGEN_MONSTER_H
#define MONSTERGEN_MONSTER_H

#include <string>

class Monster {

public:
    enum MonsterType
    {
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPE
    };

    Monster(MonsterType type, std::string name, std::string roar, int hp)
        :m_type(type), m_name(name), m_roar(roar), m_hp(hp)
        {}

    std::string getType(MonsterType type);
    void print();

protected:

private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hp;

};

#endif //MONSTERGEN_MONSTER_H
