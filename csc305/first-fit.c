#include <stdio.h>
#include <stdlib.h>
#include "global.h"

int main()
{
	// get input string
	const int INITIAL_STR_SIZE = 5;
	char *input = (char *) malloc(INITIAL_STR_SIZE * sizeof(char));
	char maxlen = INITIAL_STR_SIZE;
	char buf; // hold temp. char of string
	int i = 0; // str. char index

	printf("Enter size of memory:\n");

	while((buf = fgetc(stdin)) != '\n') 
	{
		if(i == maxlen)
		{
			// double storage
			maxlen *= 2;
			realloc(input, maxlen * sizeof(char)); 
		}

		input[i] = buf;
		i++;
	}

	memsize = atoi(input);

	
	
	free(input);

	return 0;
}
