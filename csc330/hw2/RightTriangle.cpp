// RightTriangle.cpp
// Contains the definition of the methods in RightTriangle.
#include <cmath>
#include "RightTriangle.h"
RightTriangle::RightTriangle(double positionX, double positionY, double width, double height) : Shape(positionX, positionY)
{
	this->width = width;
	this->height = width;
}
double RightTriangle::area()
{
	return width * height / 2;
}
double RightTriangle::getWidth()
{
	return width;
}
double RightTriangle::getHeight()
{
	return height;
}
double RightTriangle::getHypotenuseLength()
{
	return sqrt( width*width + height*height  );
}
void RightTriangle::resize(double width, double height)
{
	this->width = width;
	this->height = width;
}
