#include <iostream>

using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

double multiplyFractions(Fraction f1, Fraction f2)
{
    return static_cast<double>(f1.numerator * f2.numerator) / (f1.denominator * f2.denominator);
}

int main()
{
    cout << "Hello user!" << endl;
    Fraction frac1;
    Fraction frac2;
    cout << "Fraction 1 numerator? ";
    cin >> frac1.numerator;
    cout << "Fraction 1 denominator? ";
    cin >> frac1.denominator;
    cout << "Fraction 2 numerator? ";
    cin >> frac2.numerator;
    cout << "Fraction 2 denominator? ";
    cin >> frac2.denominator;

    double answer = multiplyFractions(frac1, frac2);
    cout << '\n' << "Fraction 1 mulitplied by Fraction 2 = " << answer;

    return 0;
}
