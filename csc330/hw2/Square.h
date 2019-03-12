#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
	public:
	Square(const double &w, double x, double y);
	virtual double area();
	virtual void print( );

	double getWidth();
	double getHeight();
	void resize(double w, double multiplier);

	private:
	double width;
};

#endif
