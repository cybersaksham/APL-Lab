#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() : length(1), width(1) {}

float Rectangle::getLength() const { return length; }

float Rectangle::getWidth() const { return width; }

void Rectangle::setLength(float l) {
	if (l > 0.0 && l < 20.0) length = l;
	else cout << "Invalid length\n";
}

void Rectangle::setWidth(float w) {
	if (w > 0.0 && w < 20.0) width = w;
	else cout << "Invalid width\n";
}

float Rectangle::perimeter() const { return 2 * (length + width); }

float Rectangle::area() const { return length * width; }
