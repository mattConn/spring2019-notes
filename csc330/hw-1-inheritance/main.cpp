#include <iostream>
#include <cmath>
#include "cylinder.h"

using namespace std;

double distance(const Cylinder &c);
double distance(const Cylinder &c1, const Cylinder &c2);

int main()
{
	Cylinder p1;
	Cylinder p2(3,4,5,6);
	Cylinder p3 = p2;
	
	p1.print();
	p2.print();

	cout << p2.equal(p3) << endl;
	cout << p1.distance() << endl;
	cout << p1.distance(p2) << endl;

	cout << "=========" << endl;

	cout << distance(p1) << endl;
	cout << distance(p1,p2) << endl;

	cout << "=========" << endl;

	cout << p2.area() << endl;
	cout << p2.volume() << endl;

	return 0;
}

double distance(const Cylinder &c)
{
    return sqrt( pow(c.getx(),2) + pow(c.gety(),2) );
}

double distance(const Cylinder &c1, const Cylinder &c2)
{
    return sqrt( pow(c2.getx() - c1.getx(),2) + pow(c2.gety() - c1.gety(),2) );
}
