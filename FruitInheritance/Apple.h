#include <utility>

//
// Created by alex on 9/12/18.
//

#ifndef FRUITINHERITANCE_APPLE_H
#define FRUITINHERITANCE_APPLE_H

#include <string>
#include <iostream>
#include "Fruit.h"

class Apple: public Fruit {
private:
    double fibre;

public:
    Apple(std::string name, std::string colour, double fib):
        Fruit(std::move(name), colour), fibre(fib){}

        friend std::ostream& operator<<(std::ostream &out, const Apple &apple);
};


#endif //FRUITINHERITANCE_APPLE_H
