//
// Created by alex on 15/12/18.
//

#ifndef GAMEELEVEN_MONSTER_H
#define GAMEELEVEN_MONSTER_H


#include "Creature.h"

class Monster: public Creature {

public:
    enum Type{
        DRAGON,
        ORC,
        SLIME,
        MAX_TYPES
    };

    struct MonsterData{
        std::string m_name;
        char m_symbol;
        int m_health;
        int m_damage;
        int m_gold;
    };
    static MonsterData monsterData[MAX_TYPES];

    explicit Monster(Type type);

    static Monster getRandomMonster();
    static int getRandomNumber(int min, int max);
};


#endif //GAMEELEVEN_MONSTER_H
