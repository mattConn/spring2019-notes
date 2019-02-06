#include <stdio.h>
#include "lab2.h"

int main()
{
	// job list
	struct Job jobList[MAX_PARTS];

	// partitions 1 through 5
	struct Partition memory[MAX_PARTS];

	// init jobs and partition:
	// name jobs and define size of jobs in jobList and set their statuses,
	// set size of each partition
	for(int i = 0; i < MAX_PARTS; i++)
	{
		init_job(&jobList[i], &i, &JOB_SIZES[i]);
		init_part(&memory[i], &PART_SIZES[i]);
	}

/*
	// first fit algorithm for allocation
	for()
	{
		
	}
*/

	return 0;
}
