#include <iostream>
using namespace std;

class Complex {
    private:
        float realPart;
        float imaginaryPart;

    public:
        Complex() : realPart(0), imaginaryPart(0) {}
        Complex(float real, float imaginary) : realPart(real), imaginaryPart(imaginary) {}

        Complex operator+(const Complex &other) {
            return Complex(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
        }

        Complex operator-(const Complex &other) {
            return Complex(realPart - other.realPart, imaginaryPart - other.imaginaryPart);
        }

        void print() {
            cout << "(" << realPart << ", " << imaginaryPart << ")" << endl;
        }
};

int main() {
	float r1, i1, r2, i2;
	cout << "Real part for complex no 1: ";
	cin >> r1;
	cout << "Imaginary part for complex no 1: ";
	cin >> i1;
	cout << "Real part for complex no 2: ";
	cin >> r2;
	cout << "Imaginary part for complex no 2: ";
	cin >> i2;
	
	Complex c1(r1, i1);
	Complex c2(r2, i2);
	
	cout << "Complex no 1: ";
	c1.print();
	cout << "Complex no 2: ";
	c2.print();
	
	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;
	
	cout << "Addition: ";
	c3.print();
	cout << "Subtraction: ";
	c4.print();

    return 0;
}

