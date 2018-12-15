#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Circle.h"

int getLargestRadius(std::vector<Shape*> &v) {
    int largestRadius =0;
    for(auto const &element : v){
        // Ensure the dynamic cast succeeds by checking for a null pointer result
        if (auto *c = dynamic_cast<Circle*>(element))
        {
            if (c->getRadius() > largestRadius)
                largestRadius = c->getRadius();
        }
    }
    return largestRadius;
}


int main() {
    std::vector<Shape*> v;
    v.push_back(new Circle(Point(1, 2, 3), 7));
    v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
    v.push_back(new Circle(Point(4, 5, 6), 3));

    for (auto const &element : v) {
        std::cout << *element << '\n';
    }

    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function

    for (auto const &element : v) {
        delete element;
    }

    return 0;
}