#include "Rational.h"

#include <iostream>
using namespace std;

int Rational::gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

void Rational::reduce() {
	int g = gcd(numerator, denominator);
	numerator /= g;
	denominator /= g;
	if(denominator < 0) {
		numerator *= -1;
		denominator *= -1;
	}
}

Rational::Rational(int num, int den) : numerator(num), denominator(den) {
	if(den == 0) {
		cout << "Denominator cannot be zero. Setting 1" << endl;
		denominator = 1;
	}
	reduce();
}

Rational Rational::operator+(const Rational &rhs) const {
	int newNum = numerator * rhs.denominator + denominator * rhs.numerator;
	int newDen = denominator * rhs.denominator;
	return Rational(newNum, newDen);
}

Rational Rational::operator-(const Rational &rhs) const {
	int newNum = numerator * rhs.denominator - denominator * rhs.numerator;
	int newDen = denominator * rhs.denominator;
	return Rational(newNum, newDen);
}

Rational Rational::operator*(const Rational &rhs) const {
	int newNum = numerator * rhs.numerator;
	int newDen = denominator * rhs.denominator;
	return Rational(newNum, newDen);
}

Rational Rational::operator/(const Rational &rhs) const {
	int newNum = numerator * rhs.denominator;
	int newDen = denominator * rhs.numerator;
	return Rational(newNum, newDen);
}

string Rational::toRationalString() const {
	return to_string(numerator) + "/" + to_string(denominator);
}

double Rational::toDouble() const {
	return (double)numerator / denominator;
}

