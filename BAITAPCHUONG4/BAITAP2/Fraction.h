#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den);
    Fraction(int n);

    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int num);
    void setDenominator(int den);
};

Fraction operator+(const Fraction& f1, const Fraction& f2);
Fraction operator-(const Fraction& f1, const Fraction& f2);
Fraction operator*(const Fraction& f1, const Fraction& f2);
Fraction operator/(const Fraction& f1, const Fraction& f2);
bool operator==(const Fraction& f1, const Fraction& f2);
bool operator!=(const Fraction& f1, const Fraction& f2);
bool operator>=(const Fraction& f1, const Fraction& f2);
bool operator<=(const Fraction& f1, const Fraction& f2);
std::ostream& operator<<(std::ostream& out, const Fraction& f);
std::istream& operator>>(std::istream& in, Fraction& f);

#endif // FRACTION_H
