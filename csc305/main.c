#include <stdio.h>

typedef enum {PSIZE, JNUM} partinfo;
typedef enum {JSIZE, JSTAT} jobinfo;

int main()
{

	#define MAX_PARTS 5
	#define MAX_JOBS 10
	
	// program setup
	//==============

	// choosing algorithm to implement
	// -------------------------------
	char algo = 0;
	char buf;
	char *algoopts = "fbwn"; // algo. options (fit: first, best, worst, next)

	printf("Choose which memory management algorithm to test:\n");
	do
	{
		printf("f - first fit\tb - best fit\tw - worst fit\tn - next fit\n");

		while((buf = fgetc(stdin)) != '\n')
		{
			for(int i=0; i<4; i++)
			{
				if(algoopts[i] == buf)
				{
					algo = buf;
					break;
				}	
			}
		}

	}
	while(!algo);

	// memory, job and waste var. initialization
	//------------------------------------------

	int memsize=0; // size of total memory
	int numparts=0; // number of partitions of memory
	int numjobs=0; // number of jobs

	int totalwaste=0; // total wasted mem.
	int numwaiting=0; // number of jobs waiting

	// job array: size and status (0 wait, 1 run)
	int joblist[MAX_JOBS][2];

	// init
	for(int i=0; i < MAX_JOBS; i++)
	{
		for(int j=0; j < 2; j++)
			joblist[i][j] = 0;
	}

	// partition array: size and job number
	int partitions[MAX_PARTS][2];

	// init
	for(int i=0; i < MAX_PARTS; i++)
	{
		for(int j=0; j < 2; j++)
			partitions[i][j] = 0;
	}

	// get partition count
	do
	{
		printf("Enter number of partitions (from 1 - %d): ", MAX_PARTS);
		scanf("%d", &numparts);	
	}
	while(numparts > MAX_PARTS || numparts < 1); // handle out of range

	// get job count
	do
	{
		printf("Enter number of jobs (from 1 - %d): ", MAX_JOBS);
		scanf("%d", &numjobs);	
	}
	while(numjobs > MAX_JOBS || numjobs < 1); // handle out of range

	// get partition sizes and set memsize
	printf("Partition setup\n===============\n");

	for(int i=0; i < numparts; i++)
	{
		printf("Enter size of partition %d: ", i+1);
		scanf("%d", &partitions[i][PSIZE]);
		memsize += partitions[i][PSIZE];
	}

	printf("\n");

	// get job sizes
	printf("Joblist setup\n=============\n");

	for(int i=0; i < numjobs; i++)
	{
		printf("Enter size of job %d: ", i+1);
		scanf("%d", &joblist[i][JSIZE]);	
	}

	// Algorithm implementation
	// ========================

	switch(algo)
	{
		case 'f':
			// first-fit algorithm
			//--------------------
			for(int i=0; i < numjobs; i++)
			{
				for(int j=0; j < numparts; j++)
				{
					if(partitions[j][JNUM] == 0 && joblist[i][JSIZE] <= partitions[j][PSIZE])
					{
						partitions[j][JNUM] = i+1;
						joblist[i][JSTAT] = 1;
					}
				}
			}
		break;
		
		default:
			printf("Could not find routine for algorithm specified by `%c`. Exiting.\n", algo);
			return 1;
	}


	printf("\n");

	// display algorithm results
	//==========================
	printf("Program Results:\n================\n");

	// memory info
	printf("Memory size: %d\nNum. of partitions: %d\n\n", memsize, numparts);
	
	// display partition sizes
	//------------------------
	printf("Partitions:\n");
	for(int i=0; i<numparts; i++) printf("P%d=%d\t", i+1, partitions[i][PSIZE]);
	printf("\n\n");

	// display job sizes
	//------------------
	printf("Jobs:\n");
	for(int i=0; i<numjobs; i++) printf("j%d=%d\t", i+1, joblist[i][JSIZE]);
	printf("\n\n");

	// table of partitions, job and waste, total waste, total waiting jobs
	//====================================================================
	printf("Part | Job/Waste\n");
	for(int i=0; i<numparts; i++)
	{
		int waste = partitions[i][PSIZE] - joblist[ partitions[i][JNUM]-1 ][JSIZE];
		totalwaste += waste;

		printf("P%d | j%d/%d\n", i+1, partitions[i][JNUM],waste); // display partition with part. number
	}
		
	printf("\n");

	printf("Total waste: %d\n", totalwaste);

	// get waiting jobs
	for(int i=0; i<numjobs; i++) if(joblist[i][JSTAT] == 0) numwaiting++;

	printf("Waiting jobs: %d\n",numwaiting);

	return 0;
}
