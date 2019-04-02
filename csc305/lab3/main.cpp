// first-come first serve scheduling

#include <iostream>
#include <cstdio>

using namespace std;

// process struct
struct proc {
	// set by user
	int arrivalTime = 0;
	int execTime = 0;

	// calculated
	int serviceTime = 0;
	int turnaroundTime = 0;
};

#define MAX_PROC 5

int main()
{
	int numProc = 0;

	while(numProc < 1 || numProc > MAX_PROC)
	{
		cout << "Enter num. of processes (from 1-"<<MAX_PROC<<"): ";
		cin >> numProc;
	}

	// array of processes exec. time
	proc procArr[MAX_PROC];

	// average turnaround time
	double avgTurnaroundTime = 0;

	for(int i=0; i < numProc; i++)
	{
		cout << "Enter arrival time for proc " << i << ": ";
		cin >> procArr[i].arrivalTime;

		cout << "Enter exec time for proc " << i << ": ";
		cin >> procArr[i].execTime;

		// calculate service time: sum previous exec times
		for(int j=0; j<i; j++)
			procArr[i].serviceTime += procArr[j].execTime;

		// calculate turnaround time
		procArr[i].turnaroundTime = procArr[i].serviceTime - procArr[i].arrivalTime;
	}

	// calculate avg. turnaround
	for(int i=0; i < numProc; i++)
		avgTurnaroundTime += procArr[i].turnaroundTime;

	avgTurnaroundTime /= numProc;

	cout << "Proc, Arrival T., Exec. T., Service T., Turnaround T." << endl;
	// display results
	for(int i=0; i < numProc; i++)
	{
		proc process = procArr[i];

		printf("p%d\t%d\t%d\t%d\t%d\n",i,i,process.execTime, process.serviceTime, process.turnaroundTime);
	}
	cout << "Avg. turnaround time: " << avgTurnaroundTime << endl;

	return 0;
}
