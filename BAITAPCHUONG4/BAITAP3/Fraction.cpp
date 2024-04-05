#include "Fraction.h"
#include <cstdlib>
#include <ctime>

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {}

Fraction::Fraction(int n) {
    numerator = rand() % n + 1;
    denominator = rand() % n + 1;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setNumerator(int num) {
    numerator = num;
}

void Fraction::setDenominator(int den) {
    denominator = den;
}

Fraction operator+(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator() * f2.getDenominator() + f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}

Fraction operator-(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator() * f2.getDenominator() - f2.getNumerator() * f1.getDenominator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}

Fraction operator*(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator() * f2.getNumerator();
    int den = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, den);
}

Fraction operator/(const Fraction& f1, const Fraction& f2) {
    int num = f1.getNumerator() * f2.getDenominator();
    int den = f1.getDenominator() * f2.getNumerator();
    return Fraction(num, den);
}

bool operator==(const Fraction& f1, const Fraction& f2) {
    return (f1.getNumerator() == f2.getNumerator()) && (f1.getDenominator() == f2.getDenominator());
}

bool operator!=(const Fraction& f1, const Fraction& f2) {
    return !(f1 == f2);
}

bool operator>=(const Fraction& f1, const Fraction& f2) {
    return (f1.getNumerator() * f2.getDenominator() >= f2.getNumerator() * f1.getDenominator());
}

bool operator<=(const Fraction& f1, const Fraction& f2) {
    return (f1.getNumerator() * f2.getDenominator() <= f2.getNumerator() * f1.getDenominator());
}

std::ostream& operator<<(std::ostream& out, const Fraction& f) {
    out << f.getNumerator() << '/' << f.getDenominator();
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f) {
  
    return in;
}
