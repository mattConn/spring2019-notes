#include <iostream>
#include "shape.h"
#include "point.h"
#include "circle.h"
#include "triangle.h"
#include <cmath>

using namespace std;

// distance from circle center to origin
double distance(const circle &c); 

// distance from c1 center to c2 center
double distance(const circle &c1, const circle &c2); 

int main()
{
	point p;
	circle c;
	triangle t;

	return 0;
}

double distance(const circle &c) 
{
	return sqrt( pow(c.getCenter().getX(), 2) + pow(c.getCenter().getY(), 2) );
}

double distance(const circle &c1, const circle &c2)
{
	return sqrt( pow(c2.getCenter().getX() - c1.getCenter().getX(), 2) + pow(c2.getCenter().getY() - c1.getCenter().getY(), 2));
}
