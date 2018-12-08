#include <utility>

//
// Created by alex on 9/12/18.
//

#ifndef FRUITINHERITANCE_BANANA_H
#define FRUITINHERITANCE_BANANA_H

#include <string>
#include <iostream>
#include "Fruit.h"

class Banana: public Fruit {

public:
    Banana(std::string name, std::string colour);

    friend std::ostream&operator<<(std::ostream &out, Banana banana);
};

#endif //FRUITINHERITANCE_BANANA_H
