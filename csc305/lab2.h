#include <stdio.h>

// possible job statuses
enum Status {WAIT, RUN};

// a job to be stored in memory
struct Job
{
	char name[8]; // job name
	int size; // size of job
	enum Status status; // run or wait status
	int partNum; // partition number
};

// a memory partition
struct Partition
{
	struct Job job; // job
	int size; // size of partition
};

// init job
void init_job(struct Job *job, const int jobNum, const int *size)
{
	sprintf(job->name, "J%d", jobNum);
	job->status = WAIT;
	job->size = *size;
}

// init partition
void init_part(struct Partition *part, const int *size)
{
	part->size = *size;
}


// max. partitions
const int MAX_PARTS = 5;

// sizes of each partiton
const int PART_SIZES[] = {300,200,400,100,500};

// sizes of each job
const int JOB_SIZES[] = {200,200,100,200,400};
