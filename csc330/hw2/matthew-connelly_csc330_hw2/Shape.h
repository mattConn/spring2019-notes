// CSC 330 HW 2
// Matthew Connelly

#ifndef SHAPE_H
#define SHAPE_H

// Shape.h
// Contains the declaration (but not the definition!) of the Shape class.
class Shape
{
public:
Shape(double positionX, double positionY);
virtual double getPositionX();
virtual double getPositionY();
virtual void move(double positionX, double positionY);
virtual double getWidth();
virtual double getHeight();
virtual void resize(double, double);
virtual double area( ) = 0;
virtual void print( ) = 0;
private:
double positionX;
double positionY;
};

#endif
