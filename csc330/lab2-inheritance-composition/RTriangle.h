#pragma once

#include <cmath>
#include "Shape.h"

class RTriangle : public Shape
{
	double side1=0;
	double side2=0;

public:
	RTriangle(){};
	RTriangle(const double &s1, const double &s2):side1(s1), side2(s2){}

	// calculate hypotenuse
	double hyp() const {return sqrt(side1*side1 + side2*side2);}
	
	double calculate_area() const {return side1*side2/2;}

	// side setters and getters
	void setSide1(const double &s){side1 = s;};
	void setSide2(const double &s){side2 = s;};

	double getSide1() const {return side1;};
	double getSide2() const {return side2;};


};