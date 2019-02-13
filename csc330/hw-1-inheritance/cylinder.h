// CSC 330
// Matthew Connelly

#include "circle.h"

class Cylinder : public Circle
{
	double height;

public:
	Cylinder() : Circle(), height(0) {}; // default constructor
	Cylinder(const int &xx, const int &yy, const double &rr, const double &h) : Circle(xx, yy, rr), height(h) {}; // custom constructor

	// setter and getter
	void setheight(const double &h){ height = h; };
	double getheight() const { return height; };

	// get area, volume
	double area() const;
	double volume() const;

	// test for equality between 2 cylinders
	bool equal(const Cylinder &rhs);

	// print cylinder data
	void print() const;
};
