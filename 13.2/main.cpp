#include <iostream>

#include "Pair.h"

int main() {
    Pair<int, double> p1(5, 6.7);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double, int> p2(2.3, 4);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	StringValuePair<int> svp("Hello", 5);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';

    return 0;
}

/**
 *
 * Outputs:
 *
 * Pair: 5 6.7
 * Pair: 2.3 4
 * Pair: Hello 5
 *
 */