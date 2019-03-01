#include <iostream>
#include <vector>
#include <stdio.h>
#include "global.h"

using namespace std;

int main()
{
	int memsize=0; // size of total memory
	int numparts=0; // number of partitions of memory
	int numjobs=0; // number of jobs

	int totalwaste=0; // total wasted mem.
	int numwaiting=0; // number of jobs waiting

	// input buffers
	int iinput;
	string sinput;

	// construct partitions
	// --------------------
	cout << "Partition setup" << endl;
	cout << "===============" << endl;

	// get partition count
	do
	{
		cout << "Enter number of partitions (from 1 - 5): ";
		cin >> numparts;
	}
	while(numparts > 5 || numparts < 1); // handle out of range

	vector<part *> partitions;
	for(int i=0; i < numparts; i++)
	{
		cout << "Enter size of partition " << i+1 << ": ";
		cin >> iinput;
		partitions.push_back(new part(iinput));
	}


	// construct jobs
	// --------------------
	cout << "Joblist setup" << endl;
	cout << "=============" << endl;

	cout << "Enter number of jobs: ";
	cin >> numjobs;

	vector<job *> joblist;
	for(int i=0; i < numjobs; i++)
	{
		cout << "Enter name of job " << i+1 << ": ";
		cin >> sinput;

		cout << "Enter size of job " << i+1 << ": ";
		cin >> iinput;

		joblist.push_back(new job(iinput, sinput));
	}

	// set memsize
	for(auto p : partitions) memsize += p->getSize();

	// Algorithm implementation
	// ========================

	// first-fit
	// ---------
	for(auto j : joblist)
	{
		for(auto p : partitions)
		{
			if(!p->getJobPtr() && j->getSize() <= p->getSize())
			{
				j->setStatus(RUN);
				p->setJobPtr(j);

				break;
			}
		}
	}


	// display algorithm results
	//==========================

	// memory info
	printf("\nMemory size: %d\nNum. of partitions: %d\n\n", memsize, numparts);
	
	// display partition sizes
	//------------------------
	printf("Partitions:\n");
	for(int i=0; i<numparts; i++) printf("P%d=%d\t", i+1, partitions[i]->getSize());
	printf("\n\n");

	// display job sizes
	//------------------
	printf("Jobs:\n");
	for(auto j : joblist) printf("%s=%d\t", j->getName().c_str(), j->getSize());
	printf("\n\n");

	printf("Part | Job/Waste\n");
	for(int i=0; i<numparts; i++)
	{
		printf("P%d | ", i+1);

		if(partitions[i]->getJobPtr()) // if job exists (non-null)
		// print job/waste
			printf("%s/%d\n", partitions[i]->getJobPtr()->getName().c_str(), partitions[i]->getSize() - partitions[i]->getJobPtr()->getSize() );
		else // no job, all waste
			printf("-/%d\n", partitions[i]->getSize());

	}
	cout << endl;

	// get total waste
	for(auto p : partitions)
		totalwaste += (p->getSize() - (p->getJobPtr() ? p->getJobPtr()->getSize() : 0));
	printf("Total waste: %d\n", totalwaste);

	// get waiting jobs
	for(auto j : joblist)
		if(j->getStatus() == WAIT) numwaiting++;

	printf("Waiting jobs: %d\n",numwaiting);

	// end program, cleanup:

	// free partitions, jobs
	for(auto p : partitions) delete p;
	for(auto j : joblist) delete j;

	return 0;
}
