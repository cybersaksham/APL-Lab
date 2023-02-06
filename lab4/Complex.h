#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class Complex {
public:
	Complex (double real = 0.0, double img = 0.0); // constructor
	Complex operator+(const Complex &) const; // addition
	Complex operator-(const Complex &) const; // subtraction
	friend ostream& operator<<(ostream&, Complex const &);
	friend istream& operator>>(istream&, Complex &);
	Complex operator*(const Complex &other) const;
	bool operator==(const Complex &other) const;
	bool operator!=(const Complex &other) const;
private:
	double real; // real part
	double imaginary; // imaginary part
};

#endif
