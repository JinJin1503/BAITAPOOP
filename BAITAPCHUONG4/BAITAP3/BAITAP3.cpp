#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <set>
#include "Fraction.h"

class Fraciton {
	int numerator;
	int denominator;

public:
	Fraciton(int n) {
		srand(time(0));
		numerator = rand() % n + 1;
		denominator = rand() % n + 1;

	  }
	// cài đặt các toán tử =, -, *, /
	Fraciton operator+(const Fraction& f) {
		int num = numerator * f.getDenominator() + f.getDenominator() * f.getNumerator();
		int den = denominator * f.getDenominator();
		return Fraciton(num, den);
	}
	Fraction operator-(const Fraction& f) {
		int num = numerator * f.getDenominator() - f.getDenominator() * f.getNumerator();
		int den = denominator * f.getDenominator();
		return Fraction(num, den);
	}
	Fraction operator*(const Fraction& f) {
		int num = numerator * f.getNumerator();
		int den = denominator * f.getDenominator();
		return Fraction(num, den);
	}

	Fraction operator/(const Fraction& f) {
		int num = numerator * f.getDenominator();
		int den = denominator * f.getNumerator();
		return Fraction(num, den);
	}


	// cài đặt các toán tử ==, !=,>=,<=
	bool operator==(const Fraction& f) {
		return numerator * f.getDenominator() == f.getDenominator() * f.getNumerator();
	}

	bool operator!=(const Fraction& f) {
		return !(*this == f);
	}

	bool operator>=(const Fraction& f) {
		return numerator * f.getDenominator() >= f.getDenominator() * f.getNumerator();
	}

	bool operator<=(const Fraction& f) {
		return numerator * f.getDenominator() <= f.getDenominator() * f.getNumerator();
	}
	// cài đặt các toán tử <<,>>
	friend std::ostream& operator<<(std::ostream& out, const Fraction& f) {
		out << f.getNumerator() << "/" << f.getDenominator();
		return out;
	}

	friend std::istream& operator>>(std::istream& in, Fraction& f) {
		char slash;
	
		return in;
	}

	Fraciton() = default;

	Fraciton(int numerator, int denominator)
		: numerator(numerator), denominator(denominator)
	{
	}
};

	// hàm main 
	int main() {
		int n;
		std::cin >> n;
		std::vector < Fraciton> fractions;
		std::set<Fraction> uniqueFractions;
		// Sinh ngẫu nhiên 100 phân số
		for (int i = 0; i < 100; i++) {
			Fraction f(n);
			uniqueFractions.insert(f);
		}

		// In ra màn hình các phân số không trùng nhau
		std::cout << "Các phân số không trùng nhau:\n";
		for (const auto& f : uniqueFractions) {
			std::cout << f << '\n';
		}

		return 0;
	}
		