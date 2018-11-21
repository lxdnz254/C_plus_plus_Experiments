//
// Created by alex on 22/11/18.
//
#include <iostream>

#include "Fraction.h"

Fraction operator*(const Fraction &f1, const Fraction &f2){

    return {f1.m_numerator*f2.m_numerator, f1.m_denominator*f2.m_denominator};
}

Fraction operator*(const Fraction &f1, int num){
    return {f1.m_numerator * num, f1.m_denominator};
}
Fraction operator*(int num, const Fraction &f1){
    return {f1.m_numerator * num, f1.m_denominator};
}

void Fraction::print(){
    std::cout << m_numerator << "/" << m_denominator << '\n';
}

// Formula for making the greatest common denominator
int Fraction::gcd(int a, int b) {
    return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
}

// Reduces any fraction to greatest common denominator
void Fraction::reduce() {
    int gcd = Fraction::gcd(m_numerator, m_denominator);
    m_numerator /= gcd;
    m_denominator /= gcd;
}

