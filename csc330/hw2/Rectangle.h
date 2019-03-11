// Rectangle.h
// Contains the declaration (but not the definition!) of the Rectangle class,
// which inherits from the Shape class.
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
public:
Rectangle(add parameters);
// I've overridden the area() method here, just like I did in Circle.
virtual double area();
// override all virtual functions from Shape class
private:
// ...and two new data members
double width;
double height;
};