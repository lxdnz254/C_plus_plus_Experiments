//
// Created by alex on 15/12/18.
//

#ifndef CHAPTER12_SHAPE_H
#define CHAPTER12_SHAPE_H


#include <iostream>

class Shape {

public:
    virtual std::ostream& print(std::ostream &out) const = 0;
    friend std::ostream& operator << (std::ostream &out, const Shape &shape);
    virtual ~Shape() = default;
};


#endif //CHAPTER12_SHAPE_H
