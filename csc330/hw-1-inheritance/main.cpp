#include <iostream>
#include "point2d.h"

using namespace std;

int main()
{
	Point2D p1;
	Point2D p2(3,4);
	Point2D p3 = p2;
	
	p1.print();
	p2.print();

	cout << p2.equal(p3) << endl;


	return 0;
}
