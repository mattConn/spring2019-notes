#pragma once

class point
{
	int x = 0;
	int y = 0;

public:
	point(){};
	point(const int &X, const int &Y) : x(X), y(Y){};

	int getX() const { return x; };
	int getY() const { return y; };

	void setX(const int &X){ x = X; };
	void setY(const int &Y){ y = Y; };
};
