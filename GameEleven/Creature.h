#include <utility>

//
// Created by alex on 9/12/18.
//

#ifndef GAMEELEVEN_CREATURE_H
#define GAMEELEVEN_CREATURE_H


#include <string>

class Creature {

protected:
    std::string c_name;
    char c_symbol;
    int c_health;
    int c_damage;
    int c_gold;

public:
    Creature(std::string name, char symbol, int health, int damage, int gold=0);

    // getters
    std::string getName() const;
    char getSymbol() const;
    int getHealth();
    int getDamage();
    int getGold();

    void reduceHealth(int damage);
    bool isDead();
    void addGold(int gold);
};


#endif //GAMEELEVEN_CREATURE_H
