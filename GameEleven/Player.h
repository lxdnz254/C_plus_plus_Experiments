#include <utility>

//
// Created by alex on 15/12/18.
//

#ifndef GAMEELEVEN_PLAYER_H
#define GAMEELEVEN_PLAYER_H


#include "Creature.h"

class Player: public Creature {

private:
    int p_level = 1;

public:
    explicit Player(std::string name);
    void levelUp();
    int getLevel();
    bool hasWon();
};


#endif //GAMEELEVEN_PLAYER_H
