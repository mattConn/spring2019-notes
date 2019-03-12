#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
	public:
	Rectangle(const double &w, const double &h, double x, double y);
	virtual double area();
	virtual void print( );

	double getWidth();
	double getHeight();
	void resize(double w, double h);

	private:
	double width;
	double height;
}

#endif
