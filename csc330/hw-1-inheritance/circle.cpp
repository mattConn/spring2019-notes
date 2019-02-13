// CSC 330
// Matthew Connelly

#include "circle.h"
#include <cstdio>
#include <cmath>

// test for equality between 2 circles
bool Circle::equal(const Circle &rhs) const
{
	if(radius == rhs.radius) return true;

	return false;
}

// get circle area
double Circle::area() const
{
	return M_PI * radius * radius;
}

// distance from circle center to origin
double Circle::distance() const
{
	return sqrt( pow(getx(),2) + pow(gety(),2) );
}

// distance from circle center to another circle center
double Circle::distance(const Circle &rhs) const
{
	return sqrt( pow(rhs.getx() - getx(),2) + pow(rhs.gety() - gety(),2) );
}

// display circle members
void Circle::print() const
{
	Point2D::print();
	printf("radius = %.2f\n", radius);
}
