#include <utility>

//
// Created by alex on 9/12/18.
//

#ifndef FRUITINHERITANCE_FRUIT_H
#define FRUITINHERITANCE_FRUIT_H

#include <string>

class Fruit {
private:
   std::string m_name;
   std::string m_colour;

public:
    Fruit(std::string name, std::string colour)
        :m_name(std::move(name)), m_colour(colour){}

        std::string getName() const;
        std::string getColour() const;
};


#endif //FRUITINHERITANCE_FRUIT_H
