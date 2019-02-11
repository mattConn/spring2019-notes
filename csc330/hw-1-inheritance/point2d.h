#include <iostream>

class Point2D
{
	// coordinates
	int x;
	int y;

public:
	// default constructor
	Point2D() : x(0),y(0) {};

	// custom constuctor
	Point2D(const int &xx, const int &yy) : x(xx),y(yy) {};

	// mutators
	void setx(const int &xx){ x = xx; };
	void sety(const int &yy){ y = yy; };

	// accessors
	int getx() const { return x; };
	int gety() const { return y; };

	// test for equality between 2 points
	bool equal(const Point2D &rhs) const;

	// write data members to stdout
	void print() const;
};
