//
// Created by alex on 21/11/18.
//

#ifndef MONSTERGEN_MONSTERGENERATOR_H
#define MONSTERGEN_MONSTERGENERATOR_H

#include <string>
#include "Monster.h"

class MonsterGenerator {
public:
    static Monster generateMonster();


protected:

private:
    static int getRandomNumber(int min, int max);

};


#endif //MONSTERGEN_MONSTERGENERATOR_H
