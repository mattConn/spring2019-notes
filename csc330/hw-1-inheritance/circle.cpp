#include "circle.h"
#include <cstdio>

const double PI = 3.1415926;

double Circle::area() const
{
	return PI * radius * radius;
}

bool Circle::equal(const Circle &rhs) const
{
	if(radius == rhs.radius) return true;

	return false;
}

void Circle::print() const
{
	Point2D::print();
	printf("radius = %.2f\n", radius);
}
