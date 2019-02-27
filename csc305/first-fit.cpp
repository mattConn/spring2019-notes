#include <iostream>
#include <vector>
#include "global.h"

using namespace std;

int main()
{
	int memsize; // size of total memory
	int numparts; // number of partitions of memory
	int numjobs; // number of jobs

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

	// free partitions, jobs
	for(auto p : partitions) delete p;
	for(auto j : joblist) delete j;

	return 0;
}
