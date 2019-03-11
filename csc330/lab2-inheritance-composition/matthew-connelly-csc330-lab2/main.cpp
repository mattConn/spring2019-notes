// CSC 330 Lab 2
// Matthew Connelly

#include <iostream>
#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "RTriangle.h"
#include <cmath>

using namespace std;

// distance from Circle center to origin
double distance(const Circle &c); 

// distance from c1 center to c2 center
double distance(const Circle &c1, const Circle &c2); 

int main()
{
	Point p;
	Circle c;
	RTriangle rt;

	cout << "calling all point methods" << endl;
	cout << "=========================" << endl;

	cout << "p.setX(3)" << endl;
	p.setX(3);
	cout << "p.setY(4)" << endl;
	p.setY(4);
	cout << "p.getX(): " << p.getX() << endl;
	cout << "p.getY(): " << p.getY() << endl;

	cout << endl;

	cout << "calling all circle methods" << endl;
	cout << "==========================" << endl;

	cout << "c.calculate_area(): " << c.calculate_area() << endl;

	cout << endl;

	cout << "c.setRadius(4.5)" << endl;
	c.setRadius(4.5);

	cout << endl;

	cout << "c.getRadius(): " << c.getRadius() << endl;
	cout << "c.calculate_area(): " << c.calculate_area() << endl;

	cout << "c.setCenter(3, 5)" << endl;
	c.setCenter(3, 5);
	cout << "c.getCenter().getX(): " << c.getCenter().getX() << endl;
	cout << "c.getCenter().getY(): " << c.getCenter().getY() << endl;

	cout << endl;
	
	cout << "calling all rtriangle methods" << endl;
	cout << "=============================" << endl;

	cout << "rt.setSide1(8.5)" << endl;
	rt.setSide1(8.5);

	cout << "rt.setSide2(2.3)" << endl;
	rt.setSide2(2.3);

	cout << endl;

	cout << "rt.getSide1(): " << rt.getSide1() << endl;
	cout << "rt.getSide2(): " << rt.getSide2() << endl;

	cout << endl;

	cout << "rt.calculate_area(): " << rt.calculate_area() << endl;
	cout << "rt.hyp(): " << rt.hyp() << endl;

	cout << endl;

	cout << "calling non-member functions:" << endl;
	cout << "=============================" << endl;

	cout << "distance(c): " << distance(c) << endl;
	Circle c2(10, 11, 3.14);
	cout << "distance(c, c2): " << distance(c, c2) << endl;

	return 0;
}

// distance from Circle center to origin
double distance(const Circle &c) 
{
	return sqrt( pow(c.getCenter().getX(), 2) + pow(c.getCenter().getY(), 2) );
}

// distance from c1 center to c2 center
double distance(const Circle &c1, const Circle &c2)
{
	return sqrt( pow(c2.getCenter().getX() - c1.getCenter().getX(), 2) + pow(c2.getCenter().getY() - c1.getCenter().getY(), 2));
}
