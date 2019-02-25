#include "Shape.h"
#include "Point.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape
{
	Point center;
	double radius;
public:
	Circle() : radius(0), center(){}; // default constructor
	Circle(const double &r, const int &X, const int &Y) : radius(0), center(X, Y){}; // initializer constructor

	double calculate_area() const;
};

#endif
