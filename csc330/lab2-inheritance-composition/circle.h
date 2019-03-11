#pragma once

#include "Shape.h"
#include "Point.h"

#ifndef PI
#define PI 3.1415926
#endif

class Circle : public Shape
{
	Point center;
	double radius = 0;
public:
	Circle(){};
	Circle(const int &X, const int &Y, const double &r) : radius(r) { setCenter(X, Y); }

	// calculate area of circle
	double calculate_area() {return PI * radius * radius;};

	// radius setter and getter
	double getRadius() const {return radius;}
	void setRadius(const double &r) {radius = r;}

	// center getter and setter
	Point getCenter() const {return center;}

	void setCenter(const int &X, const int &Y)
	{
		center.setX(X);
		center.setY(Y);
	}
};
