#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle rect;

	cout << "Default length: " << rect.getLength() << endl;
	cout << "Default width: " << rect.getWidth() << endl;

	float l, w;
	cout << "Enter length: ";
	cin >> l;
	cout << "Enter width: ";
	cin >> w;
	
	rect.setLength(l);
	rect.setWidth(w);

	cout << "Updated length: " << rect.getLength() << endl;
	cout << "Updated width: " << rect.getWidth() << endl;

	cout << "Perimeter: " << rect.perimeter() << endl;
	cout << "Area: " << rect.area() << endl;

	return 0;
}
