//
// Created by alex on 9/12/18.
//

#include "Banana.h"

std::ostream& operator<<(std::ostream &out, const Banana banana) {
    out << "Banana(" << banana.getName() << ", " << banana.getColour() << ")" << '\n';
    return out;
}

Banana::Banana(std::string name, std::string colour)
        : Fruit(std::move(name), std::move(colour)){}
