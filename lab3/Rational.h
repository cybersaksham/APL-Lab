#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>
using namespace std;

class Rational {
private:
	int numerator;
	int denominator;

	int gcd(int a, int b);
	void reduce();

public:
	Rational(int num = 0, int den = 1);

	Rational operator+(const Rational &rhs) const;
	Rational operator-(const Rational &rhs) const;
	Rational operator*(const Rational &rhs) const;
	Rational operator/(const Rational &rhs) const;

	string toRationalString() const;
	double toDouble() const;
};

#endif

