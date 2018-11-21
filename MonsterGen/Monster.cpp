//
// Created by alex on 21/11/18.
//
#include <iostream>
#include <string>
#include "Monster.h"

std::string Monster::getType(Monster::MonsterType type) {
    switch(type)
    {
        case Monster::DRAGON :
            return "dragon";
        case Monster::GOBLIN :
            return "goblin";
        case Monster::OGRE :
            return "ogre";
        case Monster::ORC :
            return "orc";
        case Monster::SKELETON :
            return "skeleton";
        case Monster::TROLL :
            return "troll";
        case Monster::VAMPIRE :
            return "vampire";
        case Monster::ZOMBIE :
            return "zombie";
    }
}

void Monster::print() {
    std::cout << m_name << " the " << Monster::getType(m_type)
        << " has " << m_hp << " hit points and says " << m_roar << '\n';
}