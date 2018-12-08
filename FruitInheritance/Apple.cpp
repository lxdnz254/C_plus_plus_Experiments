//
// Created by alex on 9/12/18.
//

#include "Apple.h"

std::ostream& operator<<(std::ostream &out, const Apple &apple) {
    out << "Apple("<< apple.getName()
        << ", " << apple.getColour()
        << ", "<< apple.fibre << ")"
        << '\n';
    return out;
}

Apple::Apple(std::string name, std::string colour, double fib) :
        Fruit(std::move(name), std::move(colour)), fibre(fib){}
