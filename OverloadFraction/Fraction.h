//
// Created by alex on 22/11/18.
//

#ifndef OVERLOADFRACTION_FRACTION_H
#define OVERLOADFRACTION_FRACTION_H

#include <iostream>

class Fraction {
public:
    Fraction(int numerator=0, int denominator=1)
        : m_numerator(numerator), m_denominator(denominator){
        // Any instantiated Fraction will automatically be reduced to GCD
        reduce();
    }

    void print();
    void reduce();
    static int gcd(int a, int b);

    // overloaded operators for multiplying Fractions using friend method
    friend Fraction operator*(const Fraction &f1, const Fraction &f2);
    friend Fraction operator*(const Fraction &f1, int num);
    friend Fraction operator*(int num, const Fraction &f1);

    // overloading output/input operators
    friend std::ostream& operator<<(std::ostream &out, const Fraction &f1);
    friend std::istream& operator>>(std::istream &in, Fraction &f1);

protected:

private:
    int m_numerator;
    int m_denominator;
};


#endif //OVERLOADFRACTION_FRACTION_H
