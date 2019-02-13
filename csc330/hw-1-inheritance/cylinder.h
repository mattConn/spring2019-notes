#include "circle.h"

class Cylinder : public Circle
{
	double height;

public:
	Cylinder() : Circle(), height(0) {}; // default constructor
	Cylinder(const double &h) : Circle(), height(h) {}; // custom constructor

	// setter and getter
	void setheight(const double &h){ height = h; };
	double getheight() const { return height; };

	// get area, volume
	double area();
	double volume();

	// test for equality between 2 cylinders
	bool equal(const Cylinder &rhs);

	// print cylinder data
	void print();
};
