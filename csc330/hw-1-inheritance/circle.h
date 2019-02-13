#include "point2d.h"

class Circle : public Point2D
{

	double radius;

public:

	// default constructor
	Circle() : Point2D(0,0), radius(0) {};

	// custom constructor
	Circle(const int &xx, const int &yy, const double &rr = 0) : Point2D(xx,yy), radius(rr) {};

	// radius setter/getter
	void setr(const double &rr){ radius = rr; };
	double getr() const { return radius; };

	// test for circle equality
	bool equal(const Circle &rhs) const;

	// return area
	double area() const;

	// print members
	void print() const;
};
