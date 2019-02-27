#include <iostream>
#include <vector>
#include "global.h"

using namespace std;

int main()
{
	// get mem. size
	cout << "Enter size of memory: ";
	cin >> memsize;

	// get partition count
	do
	{
		cout << "Enter number of partitions (from 1 - 5): ";
		cin >> numparts;
	}
	while(numparts > 5 || numparts < 1);


	// construct partitions
	// --------------------

	// input buffer
	int input;

	vector<part *> partitions;
	for(int i=0; i < numparts; i++)
	{
		cout << "Enter size of partition " << i+1 << ": ";
		cin >> input;
		partitions.push_back(new part(input));
	}

	// free partitions
	for(auto p : partitions) delete p;

	return 0;
}
