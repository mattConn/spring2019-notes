#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	Circle p1;
	Circle p2(3,4);
	Circle p3 = p2;
	
	p1.print();
	p2.print();

	cout << p2.equal(p3) << endl;

	return 0;
}
