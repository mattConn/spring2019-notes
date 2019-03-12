// Rectangle.cpp
// Contains definitions of Rectangle's methods.
#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(const double &w, const double &h, double x, double y) : Shape(x,y)
{
	// Use the "this->" notation
	this->width = w;
	this->height = h;
}
double Rectangle::area()
{
	return width * height;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
void Rectangle::resize(double w, double h)
{
	this->width = w;
	this->height = h;
}

void Rectangle::print()
{
	cout << "Rectangle: " << endl;
	cout << "w: " << width << endl;
	cout << "h: " << height << endl;
	cout << "x: " << getPositionX() << endl;
	cout << "y: " << getPositionY() << endl;
}
