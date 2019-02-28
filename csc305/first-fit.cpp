#include <iostream>
#include <vector>
#include <stdio.h>
#include "global.h"

using namespace std;

int main()
{
	int memsize=0; // size of total memory
	int numparts; // number of partitions of memory
	int numjobs; // number of jobs
	int totalwaste; // total wasted mem.

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
				p->setJobPtr(j);

				break;
			}
		}
	}


	// display algorithm results
	//--------------------------

	// memory info
	cout << "Memory size: " << memsize << endl;
	cout << "Num. of partitions: " << numparts << endl;
	cout << endl;
	
	// display partition sizes
	//------------------------
	cout << "Partitions:\t" << endl;
	for(int i=0; i<numparts; i++)
	{
		cout << "P"<<i+1<<"="<<partitions[i]->getSize() << "\t";
	}
	cout << "\n" << endl;

	// display job sizes
	//------------------
	cout << "Jobs:\t" << endl;
	for(auto j : joblist) cout << j->getName()<<"="<<j->getSize()<<"\t";
	cout << "\n" << endl;

	cout << "Part | Job/Waste" << endl;
	for(int i=0; i<numparts; i++)
	{
		cout << "P" << i+1 << " | "; // partition number

		if(partitions[i]->getJobPtr()) // if job exists (non-null)
		// print job/waste
			cout << partitions[i]->getJobPtr()->getName() << "/" << partitions[i]->getSize() - partitions[i]->getJobPtr()->getSize() << endl;
		else // no job, all waste
			cout << "-/" << partitions[i]->getSize() << endl;

	}
	cout << endl;

	// get total waste
	for(auto p : partitions)
		totalwaste += (p->getSize() - (p->getJobPtr() ? p->getJobPtr()->getSize() : 0));
	cout << "Total waste: " << totalwaste << endl;


	// end program, cleanup:

	// free partitions, jobs
	for(auto p : partitions) delete p;
	for(auto j : joblist) delete j;

	return 0;
}
