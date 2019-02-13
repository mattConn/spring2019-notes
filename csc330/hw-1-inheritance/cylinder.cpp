#include "cylinder.h"
#include <cmath>

// get area, volume
double Cylinder::area()
{
	return 2*M_PI*getr()*height + 2*M_PI*getr()*getr();
}

double Cylinder::volume()
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
void Cylinder::print()
{
	Circle::print();
	printf("height = %.2f\n", height);
}
