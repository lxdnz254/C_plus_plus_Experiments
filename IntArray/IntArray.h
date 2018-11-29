//
// Created by alex on 27/11/18.
//

#ifndef INTARRAY_INTARRAY_H
#define INTARRAY_INTARRAY_H

#include <iostream>

class IntArray {
private:
    int m_length = 0;
    int *m_array = nullptr;

public:
    explicit IntArray(int length);
    ~IntArray();
    IntArray(const IntArray &array);

    int& operator[](int index);
    IntArray& operator=(const IntArray &array);
    friend std::ostream& operator<< (std::ostream &out, const IntArray &array);
};


#endif //INTARRAY_INTARRAY_H
