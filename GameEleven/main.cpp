#include <utility>
#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime>
#include "Player.h"
#include "Monster.h"

void attackPlayer(Monster &m, Player &p) {
    // If the monster is dead, it can't attack the player
    if (m.isDead())
        return;

    // Reduce the player's health by the monster's damage
    p.reduceHealth(m.getDamage());
    std::cout << "The " << m.getName() << " hit you for " << m.getDamage() << " damage.\n";
}

void attackMonster(Player &p, Monster &m) {
    // If the player is dead, we can't attack the monster
    if (p.isDead())
        return;

    std::cout << "You hit the " << m.getName() << " for " << p.getDamage() << " damage.\n";

    // Reduce the monster's health by the player's damage
    m.reduceHealth(p.getDamage());

    // If the monster is now dead, level the player up
    if (m.isDead())
    {
        std::cout << "You killed the " << m.getName() << ".\n";
        p.levelUp();
        std::cout << "You are now level " << p.getLevel() << ".\n";
        std::cout << "You found " << m.getGold() << " gold.\n";
        p.addGold(m.getGold());
    }
}

void fightMonster(Player &p) {
    // First randomly generate a monster
    Monster m = Monster::getRandomMonster();
    std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ").\n";

    // While the monster isn't dead and the player isn't dead, the fight continues
    while (!m.isDead() && !p.isDead())
    {
        std::cout << "(R)un or (F)ight: ";
        char input;
        std::cin >> input;

        if (input == 'R' || input == 'r')
        {
            // 50% chance of fleeing successfully
            if (Monster::getRandomNumber(1, 2) == 1)
            {
                std::cout << "You successfully fled.\n";
                return; // success ends the encounter
            }
            else
            {
                // Failure to flee gives the monster a free attack on the player
                std::cout << "You failed to flee.\n";
                attackPlayer(m, p);
                continue;
            }
        }

        if (input == 'F' || input == 'f')
        {
            // Player attacks first, monster attacks second
            attackMonster(p, m);
            attackPlayer(m, p);
        }
    }
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // set initial seed value to system clock
    rand(); // get rid of first result

    std::cout << "Enter your name: ";
    std::string playerName;
    std::cin >> playerName;

    Player p(playerName);
    std::cout << "Welcome, " << p.getName() << '\n';

    // If the player isn't dead and hasn't won yet, the game continues
    while (!p.isDead() && !p.hasWon())
        fightMonster(p);

    // At this point, the player is either dead or has won
    if (p.isDead())
    {
        std::cout << "You died at level " << p.getLevel() << " and with " << p.getGold() << " gold.\n";
        std::cout << "Too bad you can't take it with you!\n";
    }
    else
    {
        std::cout << "You won the game with " << p.getGold() << " gold!\n";
    }

    return 0;
}
