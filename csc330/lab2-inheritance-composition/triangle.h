#pragma once

#include <cmath>
#include "shape.h"

class triangle : public shape
{
	double side1=0;
	double side2=0;

public:
	triangle(){};
	triangle(const double &s1, const double &s2):side1(s1), side2(s2){}

	double hyp() const {return sqrt(side1*side1 + side2*side2);}
	
	double calculate_area() const {return side1*side2/2;}
};
