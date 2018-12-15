//
// Created by alex on 16/12/18.
//

#ifndef INC_13_1_PAIR1_H
#define INC_13_1_PAIR1_H

#include <iostream>

template <class T>
class Pair1 {
private:
    T m_x;
    T m_y;

public:
    Pair1(const T& x, const T& y): m_x(x), m_y(y){}
    T& first() {return m_x;}
    const T& first() const{return m_x;}
    T& second() {return m_y;}
    const T& second() const {return m_y;}
};


#endif //INC_13_1_PAIR1_H
