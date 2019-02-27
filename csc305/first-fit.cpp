#include <iostream>
#include <vector>
#include <stdio.h>
#include "global.h"

using namespace std;

int main()
{
	int memsize; // size of total memory
	int numparts; // number of partitions of memory
	int numjobs; // number of jobs

/*
	// get mem. size
	cout << "Enter size of memory: ";
	cin >> memsize;


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
		cout << "Enter size of job " << i+1 << ": ";
		cin >> iinput;

		cout << "Enter name of job " << i+1 << ": ";
		cin >> sinput;

		joblist.push_back(new job(iinput, sinput));
	}
*/
	// TEST

	numparts = 2;
	numjobs = 3;

	vector<part *> partitions;
	vector<job *> joblist;

	partitions.push_back(new part(200));
	partitions.push_back(new part(300));

	joblist.push_back(new job(100, "j1"));
	joblist.push_back(new job(400, "j2"));
	joblist.push_back(new job(5000, "j3"));

	// Algorithm implementation
	// ========================

	// first-fit
	// ---------
	for(auto j : joblist)
	{
		for(auto p : partitions)
		{
			if(!p->getJob() && j->getSize() <= p->getSize())
			{
				p->setJob(j);

				break;
			}
		}
	}


	cout << "Part | Job/Waste" << endl;
	for(int i=0; i<numparts; i++)
	{
		cout << "P" << i+1 << " | "; // partition number

		if(partitions[i]->getJob()) // if job exists (non-null)
		// print job/waste
			cout << partitions[i]->getJob()->getName() << "/" << partitions[i]->getSize() - partitions[i]->getJob()->getSize() << endl;
		else // no job, all waste
			cout << "-/" << partitions[i]->getSize() << endl;

	}



	// end program, cleanup:

	// free partitions, jobs
	for(auto p : partitions) delete p;
	for(auto j : joblist) delete j;

	return 0;
}
