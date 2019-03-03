#pragma once

#include "shape.h"
#include "point.h"

#ifndef PI
#define PI 3.1415926
#endif

class circle : public shape
{
	point center;
	double radius=0;
public:
	circle(){};
	circle(const double &r, const int &X, const int &Y) : radius(0)
	{
		center.setX(X);
		center.setY(Y);
	}

	double calculate_area() const {return PI * radius * radius;};

	point getCenter() const {return center;}
};
