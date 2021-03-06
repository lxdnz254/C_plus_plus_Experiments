//
// Created by alex on 16/12/18.
//

#ifndef INC_13_2_PAIR_H
#define INC_13_2_PAIR_H

#include <iostream>
#include <string>

template <class T1, class T2>
class Pair {
private:
    T1 m_x;
    T2 m_y;

public:
    Pair(const T1& x, const T2& y): m_x(x), m_y(y) {}
    T1& first() { return m_x;}
    const T1& first() const { return m_x;}
    T2& second() { return  m_y;}
    const T2& second() const { return m_y;}
};

template <class S>
class StringValuePair : public Pair<std::string, S> {
public:
    StringValuePair(const std::string& key, const S& value) :
        Pair<std::string, S>(key, value) {}
};

#endif //INC_13_2_PAIR_H
