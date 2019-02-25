#ifndef POINT_H
#define POINT_H

class Point
{
	int x;
	int y;

public:
	Point() : x(0), y(0){}; // default constructor
	Point(const int &X, const int &Y) : x(X), y(Y){}; // initializer constructor

	int getX(){ return x; };
	int getY(){ return y; };

};

#endif
