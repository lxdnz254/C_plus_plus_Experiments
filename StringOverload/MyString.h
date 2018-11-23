//
// Created by alex on 24/11/18.
//

#ifndef STRINGOVERLOAD_MYSTRING_H
#define STRINGOVERLOAD_MYSTRING_H

#include <string>

class MyString {
private:
    std::string m_string;

public:
    explicit MyString(std::string string) : m_string(string)
    {}

    std::string operator()(int i, int j);
};


#endif //STRINGOVERLOAD_MYSTRING_H
