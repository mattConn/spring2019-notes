#pragma once

class Shape
{
protected:
	double area = 0;

public:
	Shape(){};

	double calculate_area(){return area;};
};
