#include <stdio.h>

// possible job statuses
enum status {WAIT, RUN};

// a job to be stored in memory
struct job
{
	char name[8]; // job name
	int size; // size of job
	status s; // run or wait status
	int partNum; // partition number
};

// a memory partition
struct partition
{
	job j;
};

int main()
{
	// max. partitions
	const int MAX_PARTS = 5;

	// job list
	job jobList[MAX_PARTS];

	// name jobs in jobList
	for(int i = 0; i < MAX_PARTS; i++) 
	{
		sprintf(jobList[i].name, "J%d", i+1);
		printf("%s\n", jobList[i].name);
	}

	// partitions 1 through 5
	partition memory[MAX_PARTS];

	return 0;
}
