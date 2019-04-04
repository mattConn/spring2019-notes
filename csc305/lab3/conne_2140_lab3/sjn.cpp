// shortest job next scheduling

#include <iostream>
#include <cstdio>

using namespace std;

// process struct
struct proc {
	// set by user
	int execTime = 0;
	// calculated
	int turnaroundTime = 0;
};

#define MAX_PROC 5

int main()
{
	int numProc = 0;

	// get num. of processes
	while(numProc < 1 || numProc > MAX_PROC)
	{
		cout << "Enter num. of processes (from 1-"<<MAX_PROC<<"): ";
		cin >> numProc;
	}

	// array of processes exec. time
	proc procArr[MAX_PROC];

	// average turnaround time
	double avgTurnaroundTime = 0;

	// get arrival times and exec times
	for(int i=0; i < numProc; i++)
	{
		cout << "Enter exec time for proc " << i << ": ";
		cin >> procArr[i].execTime;
	}

    // sort in ascending order by exec time (bubble sort)
	for(int i=0; i < numProc-1; i++)
	{
        // temp storage
        proc smallest = procArr[i];
        int index = -1; // index

	    for(int j=i+1; j < numProc; j++)
        {
            if(procArr[j].execTime < smallest.execTime)
            {
                smallest = procArr[j];
                index = j;
            }
        }

        // if smallest item was found
        if(index != -1)
        {
            procArr[index] = procArr[i];
            procArr[i] = smallest;
        }
    }

	// calculate turnaround time: sum previous exec times
	for(int i=0; i < numProc; i++)
	{
		for(int j=0; j<i; j++)
			procArr[i].turnaroundTime += procArr[j].execTime;
    }

	// calculate avg. turnaround
	// sum
	for(int i=0; i < numProc; i++)
		avgTurnaroundTime += procArr[i].turnaroundTime;

	// division
	avgTurnaroundTime /= numProc;

	// display results
	cout << "Proc, Arrival T., Exec. T., Turnaround T." << endl;
	for(int i=0; i < numProc; i++)
	{
		proc process = procArr[i];

		printf("p%d\t0\t%d\t%d\n",i,process.execTime, process.turnaroundTime);
	}
	cout << "Avg. turnaround time: " << avgTurnaroundTime << endl;

	return 0;
}
