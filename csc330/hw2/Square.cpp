#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(const double &w, double x, double y) : Shape(x,y)
{
	width = w;
}

double Square::area()
{
	return width*width;
}

void Square::print()
{
	cout << "w: " << width << endl;
	cout << "h: " << width << endl;
	cout << "x: " << getPositionX() << endl;
	cout << "y: " << getPositionY() << endl;
}

double Square::getWidth()
{
	return width;
}

double Square::getHeight()
{
	return width;
}

void Square::resize(double w, double multiplier)
{
	width = w * multiplier;
}
