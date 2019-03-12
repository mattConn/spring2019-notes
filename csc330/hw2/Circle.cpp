// Circle.cpp
// Contains the definitions of the methods of the Circle class.
#include <iostream>
#include "Circle.h"
using namespace std;
Circle::Circle(const double &r,const double &x, const double &y) : Shape(x,y)
{
 // Use the "this->" notation
 this->radius = r;
}
double Circle::area()
{
    const double PI = 3.1415927;
    return PI * radius * radius;
}
double Circle::getRadius()
{
    return radius;
}
void Circle::resize(double &r, double &multiplier)
{
    radius = r*multiplier;
}
// override all virtual functions from Shape class
void Circle::print()
{
	cout << "r: " << getRadius() << endl;
	cout << "x: " << getPositionX() << endl;
	cout << "y: " << getPositionY() << endl;
}

