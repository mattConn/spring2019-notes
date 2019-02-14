// CSC 330 Lab1
// Matthew Connelly
// complex.cpp

#include <cstdio>
#include "complex.h"

// ** note: default constructor, setters and getters defined inline

complex::complex(const double &r, const double &i) : real(r), imag(i) {}; // custom constructor 

// add a complex number to this complex number
complex complex::addComplex(const complex &c)
{
	complex tmp;

	tmp.real = this->real + c.real;
	tmp.imag = this->imag + c.imag;

	return tmp;
}

// subtract a complex number from this complex number
complex complex::subtractComplex(const complex &c)
{
	complex tmp;

	tmp.real = this->real - c.real;
	tmp.imag = this->imag - c.imag;

	return tmp;
}

// multiply this complex number by a complex number
complex complex::multiplyComplex(const complex &c)
{
	complex tmp;

	tmp.real = this->real * c.real - this->imag * c.imag;
	tmp.imag = this->real * c.imag + this->imag * c.real;

	return tmp;
}

// display private members (real and imaginary)
void complex::display() const { printf("%.2f + %.2fi\n", real,imag); }

