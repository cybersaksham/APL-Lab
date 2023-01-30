#include "Rational.h"
#include <iostream>
using namespace std;

int main() {
	int an, ad, bn, bd;
	
	cout << "Enter first rational number" << endl;
	cout << "Numerator: ";
	cin >> an;
	cout << "Denominator: ";
	cin >> ad;
	
	cout << "Enter second rational number" << endl;
	cout << "Numerator: ";
	cin >> bn;
	cout << "Denominator: ";
	cin >> bd;
	
	Rational a(an, ad), b(bn, bd);
	Rational c = a + b;
	cout << "a + b = " << c.toRationalString() << endl;

	c = a - b;
	cout << "a - b = " << c.toRationalString() << endl;

	c = a * b;
	cout << "a * b = " << c.toRationalString() << endl;

	c = a / b;
	cout << "a / b = " << c.toRationalString() << endl;

	cout << "a as double: " << a.toDouble() << endl;
	cout << "b as double: " << b.toDouble() << endl;

	return 0;
}

