// CSC 330 Lab1
// Matthew Connelly
// complex.h

class complex {

	double real;
	double imag;

public:
	complex() : real(0), imag(0) {}; // default constructor
	complex(const double &r, const double &i); // custom constructor

	// getters
	double getReal() const { return real; };
	double getImag() const { return imag; };

	// setters
	void setReal(const double &r){ real = r; };
	void setImag(const double &i){ imag = i; };

	// arithmetic operations
 	complex addComplex(const complex &c);
	complex subtractComplex(const complex &c);
	complex multiplyComplex(const complex &c);

	// write real and imag to stdout 
	void display() const;
};
