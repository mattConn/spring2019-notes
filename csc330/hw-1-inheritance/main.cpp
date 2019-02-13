// CSC 330
// Matthew Connelly

#include <iostream>
#include <cstdio>
#include <cmath>
#include "cylinder.h"

using namespace std;

// distance from origin to center of circle
double distance(const Cylinder &c);

// distance from center of circle to center of other circle
double distance(const Cylinder &c1, const Cylinder &c2);

int main()
{
	/*
	a. Create 2-3 concrete objects each of the above classes
	implementing all member functions included into them
	as well as the two non-member functions.
	*/

	// points
	Point2D p1(2,3);
	Point2D p2(3,4);

	// circles
	Circle c1(2,3,4);
	Circle c2(5,6,7);

	// cylinders
	Cylinder cy1(2,3,4,5);
	Cylinder cy2(6,7,8,9);

	// calling all methods
	// point2d

	printf("**** Testing point2d methods ****\n\n");

	printf("Calling x and y getters:\n");
	printf("x = %d, y = %d\n", p1.getx(), p1.gety());

	printf("Testing for equality between p1 and p2:\n");
	printf("p1 == p2: ");
	cout << p1.equal(p2) << endl;

	printf("Calling point2d print:\n");
	p1.print();

	cout << endl;

	// circle

	printf("**** Testing circle methods ****\n\n");

	printf("Calling radius getter:\n");
	printf("radius = %.2f\n", c1.getr());

	cout << endl;

	printf("Testing for equality between c1 and c2:\n");
	printf("c1 == c2: ");
	cout << c1.equal(c2) << endl;

	cout << endl;
	
	printf("Testing area getting function:\n");
	printf("area = %.2f\n", c1.area());

	cout << endl;

	printf("Testing distance from origin function:\n");
	printf("distance from (0, 0)  = %.2f\n", c1.distance());

	cout << endl;

	printf("Testing distance from other circle function:\n");
	printf("distance from c2 (%d, %d)  = %.2f\n", c2.getx(), c2.gety(), c1.distance(c2));

	cout << endl;

	printf("Calling circle print:\n");
	c1.print();

	cout << endl;

	// cylinder

	printf("**** Testing cylinder methods ****\n\n");

	printf("Calling height getter:\n");
	printf("height = %.2f\n", cy1.getheight());

	cout << endl;

	printf("Calling area getter:\n");
	printf("area = %.2f\n", cy1.area());

	cout << endl;

	printf("Calling volume getter:\n");
	printf("volume = %.2f\n", cy1.volume());

	cout << endl;

	printf("Testing for equality between 2 cylinders:\n");
	printf("cy1 == cy2: ");
	cout << cy2.equal(cy1) << endl;

	cout << endl;

	printf("Testing cylinder print:\n");
	cy1.print();


	/*
	b. Array of object Pointers with dynamic allocation
	*/

	// dynamically allocated
	Point2D *dynamic_parray = new Point2D[2];

	/*
	c. Reference (alias) to existing objects
	*/

	// ref. to existing object
	Point2D *point_ref = dynamic_parray+1;

	/*
	d. Three arrays of objects of the three classes
	*/

	// three arrays, one of each obj
	Point2D parray[] = { p1, p2 };
	Circle carray[] = { c1, c2 };
	Cylinder cyarray[] = { cy1, cy2 };

	/*
	e. Three arrays of Object Pointers of the three classes.
	*/

	// three arrays of pointers, one of each obj
	Point2D *ptr_parray[] = { dynamic_parray, dynamic_parray+1 };
	Circle *ptr_carray[] = { &c1, &c2 };
	Cylinder *ptr_cyarray[] = { &cy1, &cy2 };


	

	return 0;
}

// circle distance definitions

double distance(const Cylinder &c)
{
    return sqrt( pow(c.getx(),2) + pow(c.gety(),2) );
}

double distance(const Cylinder &c1, const Cylinder &c2)
{
    return sqrt( pow(c2.getx() - c1.getx(),2) + pow(c2.gety() - c1.gety(),2) );
}
