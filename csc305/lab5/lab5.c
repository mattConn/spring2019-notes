#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	time_t current, end, duration; // time_t variables

	duration = argc > 1 ? atoi(argv[1]) : 10; // duration of program
	current = time(NULL); // starting time of program
	end = current + duration; // when we want program to end

	// keep getting current time
	while(current < end)
		current = time(NULL);

	return 0;
}
