#ifndef APPROXIMATE_H
#define APPROXIMATE_H

#include <cmath>

namespace approx
{
    // return true if the difference between a and b is within epsilon percent of the larger of a and b
    bool approximatelyEqual(double a, double b, double epsilon)
    {
        return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
    }

    // return true if the difference between a and b is less than absEpsilon, or within relEpsilon percent of the larger of a and b
    bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
    {
        // Check if the numbers are really close -- needed when comparing numbers near zero.
        double diff = fabs(a - b);
        if (diff <= absEpsilon)
            return true;

        // Otherwise fall back to Knuth's algorithm
        return diff <= approximatelyEqual(a, b, relEpsilon);
    }
}


#endif // APPROXIMATE_H
