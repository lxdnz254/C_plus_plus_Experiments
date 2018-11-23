//
// Created by alex on 24/11/18.
//

#include "Car.h"

bool operator== (const Car &c1, const Car &c2)
{
    return (c1.m_make == c2.m_make &&
            c1.m_model == c2.m_model);
}

bool operator!= (const Car &c1, const Car &c2)
{
    return !(c1 == c2);
}

bool operator< (const Car &c1, const Car &c2)
{
    if (c1.m_make == c2.m_make) // If the car is the same make...
        return c1.m_model < c2.m_model; // then compare the model
    else
        return c1.m_make < c2.m_make; // otherwise compare the makes
}

std::ostream& operator<< (std::ostream &out, const Car &c1)
{
    out << "(" << c1.m_make << ", " << c1.m_model << ")";
    return out;
}