//
// Created by alex on 9/12/18.
//

#include "Creature.h"

Creature::Creature(std::string name, char symbol, int health, int damage, int gold)
        : c_name(std::move(name)), c_symbol(symbol), c_health(health), c_damage(damage), c_gold(gold)
{}

void Creature::reduceHealth(int damage) {
    c_health -= damage;
}

bool Creature::isDead() {
    return getHealth() <= 0;
}

void Creature::addGold(int gold) {
    c_gold += gold;
}

std::string Creature::getName() const {
    return c_name;
}

char Creature::getSymbol() const {
    return c_symbol;
}

int Creature::getHealth() const {
    return c_health;
}

int Creature::getDamage() const {
    return c_damage;
}

int Creature::getGold() const {
    return c_gold;
}
