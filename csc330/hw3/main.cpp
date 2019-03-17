#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main()
{
	// get name of file to read
	string filename;
	cout << "Enter name of file to read: ";
	cin >> filename;

	fstream infile;
	infile.open(filename);

	// if file open failure
	if(!infile.is_open())
	{
		cout <<"Could not open file "<<filename<<". Exiting."<< endl;
		return 1;
	}

	// map of words and counts
	map<string, int> words;	

	// read file and count word appearances
	// ====================================

	string line; // file line buffer
	while(getline(infile, line))
	{
		cout << line << endl;
	}

	infile.close();

	return 0;
}
