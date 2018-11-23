//
// Created by alex on 24/11/18.
//

#ifndef CAROVERLOADER_CAR_H
#define CAROVERLOADER_CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string m_make;
    std::string m_model;

public:
    Car(std::string make, std::string model)
        : m_make(make), m_model(model){}
    friend bool operator== (const Car &c1, const Car &c2);
    friend bool operator!= (const Car &c1, const Car &c2);
    friend bool operator< (const Car &c1, const Car &c2);
    friend std::ostream& operator<< (std::ostream &out, const Car &c1);
};


#endif //CAROVERLOADER_CAR_H
