#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double realPart, double imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

Complex Complex::operator+(const Complex &other) const {
	return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex &other) const {
	return Complex(real - other.real, imaginary - other.imaginary);
}

ostream& operator<<(ostream &out, Complex const &c) {
	if(c.imaginary < 0) cout << c.real << " - " << (-1 * c.imaginary) << "i";
	else cout << c.real << " + " << c.imaginary << "i";
	return out;
}

istream& operator>>(istream &in, Complex &c) {
	in >> c.real >> c.imaginary;
	return in;
}

Complex Complex::operator*(const Complex &other) const {
	return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

bool Complex::operator==(const Complex &other) const {
	return (real == other.real) && (imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex &other) const {
	return !(*this == other);
}

