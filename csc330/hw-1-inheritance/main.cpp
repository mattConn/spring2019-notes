// CSC 330
// Matthew Connelly

#include <iostream>
#include <cmath>
#include "cylinder.h"

using namespace std;

// distance from origin to center of circle
double distance(const Cylinder &c);

// distance from center of circle to center of other circle
double distance(const Cylinder &c1, const Cylinder &c2);

int main()
{
	// points
	Point2D p1(2,3);
	Point2D p2(3,4);

	// circles
	Circle c1(2,3,4);
	Circle c2(5,6,7);

	// cylinders
	Cylinder cy1(2,3,4,5);
	Cylinder cy2(6,7,8,9);
	
	// three arrays of each obj
	Point2D parray[] = { p1, p2 };
	Circle carray[] = { c1, c2 };
	Cylinder cyarray[] = { cy1, cy2 };

	return 0;
}

// circle distance definitions

double distance(const Cylinder &c)
{
    return sqrt( pow(c.getx(),2) + pow(c.gety(),2) );
}

double distance(const Cylinder &c1, const Cylinder &c2)
{
    return sqrt( pow(c2.getx() - c1.getx(),2) + pow(c2.gety() - c1.gety(),2) );
}
