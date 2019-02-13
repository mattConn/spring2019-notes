#include "circle.h"
#include <cstdio>
#include <cmath>

bool Circle::equal(const Circle &rhs) const
{
	if(radius == rhs.radius) return true;

	return false;
}

double Circle::area() const
{
	return M_PI * radius * radius;
}

double Circle::distance()
{
	return sqrt( pow(getx(),2) + pow(gety(),2) );
}
double Circle::distance(const Circle &rhs)
{
	return sqrt( pow(rhs.getx() - getx(),2) + pow(rhs.gety() - gety(),2) );
}

void Circle::print() const
{
	Point2D::print();
	printf("radius = %.2f\n", radius);
}
