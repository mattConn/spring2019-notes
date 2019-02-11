#include <cstdio>
#include "point2d.h"

using namespace std;

bool Point2D::equal(const Point2D &rhs) const
{
	if(x == rhs.x && y == rhs.y) return true;

	return false;
}

void Point2D::print() const
{
	printf("(x, y) = (%d, %d)\n", x, y);
}
