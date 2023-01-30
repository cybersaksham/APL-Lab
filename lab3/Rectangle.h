#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle {
private:
	float length, width;
public:
	Rectangle();
	float getLength() const;
	float getWidth() const;
	void setLength(float l);
	void setWidth(float w);
	float perimeter() const;
	float area() const;
};

#endif

