#pragma once

class shape
{
	double area=calculate_area();

public:
	shape(){};
	shape(const double &a) : area(a){};

	double calculate_area() const {return (area ? area : 0);};

	double getArea() const {return area;}
};
