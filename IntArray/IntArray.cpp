//
// Created by alex on 27/11/18.
//
#include <cassert>
#include <iostream>
#include "IntArray.h"

IntArray::IntArray(int length): m_length(length) {
    assert(length > 0 && "IntArray length should be a positive integer");

    m_array = new int[m_length] { 0 };
}

IntArray::~IntArray() {
    delete[] m_array;
}

// Copy constructor that does a deep copy
IntArray::IntArray(const IntArray &array): m_length(array.m_length) {
    // Allocate a new array
    m_array = new int[m_length];

    // Copy elements from original array to new array
    for (int count = 0; count < array.m_length; ++count)
        m_array[count] = array.m_array[count];
}

int& IntArray::operator[](const int index) {
    assert(index >= 0);
    assert(index < m_length);
    return m_array[index];
}

std::ostream& operator<<(std::ostream &out, const IntArray &array) {
   for (int count=0; count < array.m_length; ++count){
       out << array.m_array[count] << ' ';
   }
   return out;
}

IntArray& IntArray::operator=(const IntArray &array) {
    // self-assignment guard
    if (this == &array)
        return *this;

    // If this array already exists, delete it so we don't leak memory
    delete[] m_array;

    m_length = array.m_length;

    // Allocate a new array
    m_array = new int[m_length];

    // Copy elements from original array to new array
    for (int count = 0; count < array.m_length; ++count)
        m_array[count] = array.m_array[count];

    return *this;
}
