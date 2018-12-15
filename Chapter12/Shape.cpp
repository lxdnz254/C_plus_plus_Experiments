//
// Created by alex on 15/12/18.
//

#include "Shape.h"

std::ostream &operator<<(std::ostream &out, const Shape &shape) {
    return shape.print(out);
}
