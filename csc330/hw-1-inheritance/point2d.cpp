#include <cstdio>
#include "point2d.h"

// test for equality between points
bool Point2D::equal(const Point2D &rhs) const
{
	if(x == rhs.x && y == rhs.y) return true;

	return false;
}

// display point members
void Point2D::print() const
{
	printf("(x, y) = (%d, %d)\n", x, y);
}
