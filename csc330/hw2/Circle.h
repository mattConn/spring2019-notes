// Circle.h
// Contains the declaration (but not the definition!) of the Circle class.
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{

public:
	Circle(const double &r,const double &x, const double &y);
	virtual double area();
	virtual double getRadius();
	virtual void resize(double &r, double &multiplier);
	// override all virtual functions from Shape class
	virtual void print();

private:
	double radius;
};

#endif
