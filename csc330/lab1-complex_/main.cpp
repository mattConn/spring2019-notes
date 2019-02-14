// CSC 330 Lab1
// Matthew Connelly
// main.cpp

#include <iostream>
#include <cstdio>
#include "complex.h"

using namespace std;

int main()
{
	// user prompt numbering
	int promptNum = 0;
	
	// user input buffer
	double input[2];

	printf("Ctrl-c to quit.\n");
	// interactive program loop
	while(true)
	{
		complex z[2];

		for(int i = 0; i < 2; i++)
		{
			printf("\nEnter real and imaginary values for complex number Z%d:\n[%d]> ", i+1, promptNum);
			cin >> input[0] >> input[1];

			z[i].setReal(input[0]);
			z[i].setImag(input[1]);
		}
		
		cout << endl;
		printf("Arithmetic operations on Z1 and Z2:\n");

		printf("Z1 + Z2 = ");
		z[0].addComplex(z[1]).display();
	
		cout << endl;

		printf("Z1 - Z2 = ");
		z[0].subtractComplex(z[1]).display();

		cout << endl;

		printf("Z1 * Z2 = ");
		z[0].multiplyComplex(z[1]).display();

		promptNum++;
	}
}
