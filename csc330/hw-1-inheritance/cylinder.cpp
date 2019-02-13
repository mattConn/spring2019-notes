#include "cylinder.h"
#include <cmath>

// get area
double Cylinder::area() const
{
	return 2*M_PI*getr()*height + 2*M_PI*getr()*getr();
}

// get volume
double Cylinder::volume() const
{
	return M_PI*getr()*getr()*height;
}

// test for equality between 2 cylinders
bool Cylinder::equal(const Cylinder &rhs)
{
	if(getr() == rhs.getr() && height == rhs.height)
		return true;

	return false;
}

// print cylinder data 
void Cylinder::print() const
{
	Circle::print();
	printf("height = %.2f\n", height);
}
