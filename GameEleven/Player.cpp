//
// Created by alex on 15/12/18.
//

#include "Player.h"

void Player::levelUp() {
    ++p_level;
    ++c_damage;
}

int Player::getLevel(){
    return p_level;
}

bool Player::hasWon() {
    return getLevel() >= 20;
}

Player::Player(std::string name) : Creature(std::move(name), '@', 10, 1, 0)
{    }
