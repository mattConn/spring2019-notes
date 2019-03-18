#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		cout << "Please specify a filename." << endl;
		return 1;
	}

	// get filename from argv
	string filename = argv[1];

	// try to open file
	fstream infile;
	infile.open(filename);

	// if file open failure
	if(!infile.is_open())
	{
		cout <<"Could not open file `"<<filename<<"`. Exiting."<< endl;
		return 1;
	}

	cout<<"Reading from `"<<filename<<"`."<<endl;

	// map of words and counts
	map<string, int> wordmap;	

	// characters to ignore in file
	string ignore = ".?!,\n";

	// read file and count word appearances
	// ====================================

	// tokenize file
	string tok; // file token buffer
	while(getline(infile, tok, ' ')) // space delimiter
	{
		// convert token to lowercase
		for(int i=0; i < tok.length(); i++)
			tok[i] = tolower(tok[i]);

		// remove unwanted characters
		for(auto c : ignore)
		{
			if(tok.find(c) != -1)
				tok.erase(tok.find(c),1);
		}

		// add token to wordmap or increment count
		if(wordmap.find(tok) != wordmap.end()) // increment if found
			wordmap[tok]++;
		else // not found, insert new word
			wordmap.insert({tok, 1});
	}

	// display words and word counts
	int i = 0;
	for(auto word : wordmap)
	{
		i++;
		cout <<word.first<<"\t"<<word.second;
		i%4 == 0 ? cout << endl : cout << "\t";
	}


	infile.close();

	return 0;
}
