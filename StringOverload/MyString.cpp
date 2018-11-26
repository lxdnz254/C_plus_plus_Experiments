//
// Created by alex on 24/11/18.
//
#include <string>
#include <cassert>
#include "MyString.h"

std::string MyString::operator() (int i, int j)
{
    assert(i + j <= m_string.length() && "MyString::operator(int, int): Substring is out of range");

    std::string out;
    for (int k = i; k < i+j; ++k)
        out += m_string[k];

    return out;
}