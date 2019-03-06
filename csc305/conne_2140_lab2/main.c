#include <stdio.h>

// enums for 2d array indexing
typedef enum {PSIZE, JNUM} partinfo; // partition info: partition size index, job number index
typedef enum {JSIZE, JSTAT} jobinfo; // job info: job size index, job status index

/*
Mem. mgmt algorith testing
==========================

Jump to one of the following comments to see that specific sequence in the program:
-----------------------------------------------------------------------------------

choosing algorithm to implement

memory, job and waste var. initialization

testing without getting user input (compile time)
	OR
testing with user input

prompt user for partition and job info

Algorithm implementation
	first-fit algorithm
	best-fit algorithm
	next-fit algorithm
	worst-fit algorithm

display algorithm results
	display partition sizes
	display job sizes
	table of partitions, job and waste, total waste, total waiting jobs

*/

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

// testing without getting user input
// ----------------------------------
#ifdef NOINTERACT
	numparts = 4;
	numjobs = 4;

	partitions[0][PSIZE] = 200;
	partitions[1][PSIZE] = 100;
	partitions[2][PSIZE] = 100;
	partitions[3][PSIZE] = 400;

	memsize = 800;

	joblist[0][JSIZE] = 50;
	joblist[1][JSIZE] = 200;
	joblist[2][JSIZE] = 200;
	joblist[3][JSIZE] = 300;
#else
// testing with user input
// -----------------------

// prompt user for partition and job info
// --------------------------------------

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
#endif

	// Algorithm implementation
	// ========================

	int lastfit = -1; // for next fit algo

	switch(algo)
	{
		case 'f':
			// first-fit algorithm
			//--------------------
			for(int j=0; j < numjobs; j++)
			{
				for(int p=0; p < numparts; p++)
				{
					// if partition is empty and job can fit in part.
					if(partitions[p][JNUM] == 0 && joblist[j][JSIZE] <= partitions[p][PSIZE])
					{
						partitions[p][JNUM] = j+1; // set job number for partition
						joblist[j][JSTAT] = 1; // set job status
						break;
					}
				}
			}
		break;

		case 'b':
			// best-fit algorithm
			//--------------------
			for(int j=0; j < numjobs; j++)
			{
				int diff = -1; // diff. bewteen partition size and job size
				int smallestdiff = -1; // smallest diff. found
				int bestpart = -1; // index of partition with smallest diff.

				for(int p=0; p < numparts; p++)
				{
					// if partition is empty and job can fit in part.
					if(partitions[p][JNUM] == 0 && joblist[j][JSIZE] <= partitions[p][PSIZE])
					{
						diff = partitions[p][PSIZE] - joblist[j][JSIZE];

						// if smallestdiff is unitialized or diff is smaller than smallestdiff
						if(smallestdiff < 0 || diff < smallestdiff)
						{
							smallestdiff = diff;
							bestpart = p;
						}
					}
				}

				// if a smallestdiff was found for current job
				if(smallestdiff > -1)
				{
					partitions[bestpart][JNUM] = j+1; // set job number for partition
					joblist[j][JSTAT] = 1; // set job status
				}
			}
		break;

		case 'n':
			// next-fit algorithm
			//--------------------
			for(int j=0; j < numjobs; j++)
			{
				/* note: lastfit partition index declared before switch */

				int n = 0; // iteration counter
				int p = lastfit+1; // partition index
				while(n < numparts)
				{
					if(p == numparts) p = 0; // reset for circular queue

					// if partition is empty and job can fit in part.
					if(partitions[p][JNUM] == 0 && joblist[j][JSIZE] <= partitions[p][PSIZE])
					{
						partitions[p][JNUM] = j+1; // set job number for partition
						joblist[j][JSTAT] = 1; // set job status

						lastfit=p;
						break;
					}
					n++;
					p++;
				}
			}
		break;
		
		case 'w':
			// worst-fit algorithm
			//--------------------
			for(int j=0; j < numjobs; j++)
			{
				int diff = -1; // diff. bewteen partition size and job size
				int largestdiff = -1; // largest diff. found
				int bestpart = -1; // index of partition with largest diff.

				for(int p=0; p < numparts; p++)
				{
					// if partition is empty and job can fit in part.
					if(partitions[p][JNUM] == 0 && joblist[j][JSIZE] <= partitions[p][PSIZE])
					{
						diff = partitions[p][PSIZE] - joblist[j][JSIZE];

						// if largestdiff is unitialized or diff is larger than largestdiff
						if(largestdiff < 0 || diff > largestdiff)
						{
							largestdiff = diff;
							bestpart = p;
						}
					}
				}

				// if a largestdiff was found for current job
				if(largestdiff > -1)
				{
					partitions[bestpart][JNUM] = j+1; // set job number for partition
					joblist[j][JSTAT] = 1; // set job status
				}
			}
		break;


		default:
			printf("Could not find routine for algorithm specified by `%c`. Exiting.\n", algo);
			return 1;
	}
	// end algorithm implementation


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
	//--------------------------------------------------------------------
	printf("Part | Job/Waste\n");
	for(int i=0; i<numparts; i++)
	{
		int waste = partitions[i][PSIZE] - ( partitions[i][JNUM] != 0 ? joblist[ partitions[i][JNUM]-1 ][JSIZE] : 0 );
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
