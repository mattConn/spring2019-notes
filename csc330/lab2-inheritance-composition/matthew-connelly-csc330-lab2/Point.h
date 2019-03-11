// CSC 330 Lab 2
// Matthew Connelly

#pragma once

class Point
{
	int x = 0;
	int y = 0;

public:
	Point(){};
	Point(const int &X, const int &Y) : x(X), y(Y){};

	// coordinate getters and setters
	int getX() const { return x; };
	int getY() const { return y; };

	void setX(const int &X){ x = X; };
	void setY(const int &Y){ y = Y; };
};
