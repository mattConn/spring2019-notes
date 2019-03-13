// CSC 330 HW 2
// Matthew Connelly

// main.cpp
//#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "RightTriangle.h"

#include <iostream>
using namespace std;

int main()
{
// Declare an array of four Shape pointers.
Shape *shapes[4];

// Use the pointers to create objects of class Circle, Rectangle, Square and
// RightTriangle
int i = -1;
shapes[++i] = new Circle(3.0, 2.1, 3.1);
shapes[++i] = new Rectangle(2.6, 3.9, 10, 20);
shapes[++i] = new Square(5, 13.2, 3.14);
shapes[++i] = new RightTriangle(3,2,44.2,61);

/* Use for loop to display the values stored in private data members of the
above four objects */
cout << "Shapes private members: " << endl;
cout << "======================= " << endl;

for(auto s : shapes) s->print();

cout << endl;

// Use for loop to display the area of the above four objects
cout << "Areas:" << endl;
cout << "======" << endl;

for(auto s : shapes) cout << s->area() << endl;

cout << endl;

// Use for loop to implement function resize and display the results of it.
cout << "Shape resize:" << endl;
cout << "=============" << endl;
for(auto s : shapes)
{
	s->resize(33,44);
	s->print();
}

// Delete the objects that were created dynamically
for(auto s : shapes) delete s;



return 0;
}
