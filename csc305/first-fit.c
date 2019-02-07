#include <stdio.h>
#include "lab2.h"

int main()
{
	// job list
	job jobList[MAX_PARTS];

	// partitions 1 through 5
	partition memory[MAX_PARTS];

	// init jobs and partition:
	// name jobs and define size of jobs in jobList and set their statuses,
	// set size of each partition
	for(int i = 0; i < MAX_PARTS; i++)
	{
		init_job(&jobList[i], i+1, &JOB_SIZES[i]);
		init_part(&memory[i], &PART_SIZES[i]);
	}

	// first fit algorithm for allocation
	for(int i = 0; i < MAX_PARTS; i++)
	{
		// if fit is found
		if(jobList[i].size <= memory[i].size)
		{
			jobList[i].status = RUN; // set job status
			jobList[i].partNum = i+1; // record partition number

			memory[i].job = jobList[i]; // store job
			memory[i].size -= jobList[i].size; // calculate size now avaiable
		}
	}

	// display result of allocation
	printf("Job, Size, Status, Partition:\n\n");
	for(int i = 0; i < MAX_PARTS; i++)
	{
		printf("%s \t %d \t %d \t %d\n", jobList[i].name, jobList[i].size, jobList[i].status, jobList[i].partNum);
	}

	return 0;
}
