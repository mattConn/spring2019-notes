#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

double distance(const Circle &c);
double distance(const Circle &c1, const Circle &c2);

int main()
{
	Circle p1;
	Circle p2(3,4);
	Circle p3 = p2;
	
	p1.print();
	p2.print();

	cout << p2.equal(p3) << endl;
	cout << p1.distance() << endl;
	cout << p1.distance(p2) << endl;

	cout << "=========" << endl;

	cout << distance(p1) << endl;
	cout << distance(p1,p2) << endl;

	return 0;
}

double distance(const Circle &c)
{
    return sqrt( pow(c.getx(),2) + pow(c.gety(),2) );
}

double distance(const Circle &c1, const Circle &c2)
{
    return sqrt( pow(c2.getx() - c1.getx(),2) + pow(c2.gety() - c1.gety(),2) );
}
