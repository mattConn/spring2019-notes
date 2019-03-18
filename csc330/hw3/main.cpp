#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

// function to list words and their frequencies in a file
bool getWordFreq(const string &filename);

int main(int argc, char *argv[])
{
	// check for cli args
	if(argc == 1)
	{
		cout << "Missing a filename." << endl;
		return 1;
	}

	// call function on cli args
	for(int i = 1; i < argc; i++) getWordFreq(argv[i]);

	return 0;
}


bool getWordFreq(const string &filename)
{
	// try to open file
	fstream infile;
	infile.open(filename);

	// if file open failure
	if(!infile.is_open())
	{
		cout <<"ERROR: Could not open file `"<<filename<<"`."<< endl;
		return false;
	}

	cout<<"Reading from `"<<filename<<"`:\n"<<endl;

	// map of words and counts
	map<string, int> wordmap;	

	// characters to ignore in file
	string ignore = ".;:?!,\n";

	// read file and count word appearances
	// ====================================

	// tokenize file
	string line; // file line buffer
	string tok; // line token buffer
	while(getline(infile, line)) // newline delimiter
	{
		stringstream ss(line); // stringstream from line

		while(getline(ss, tok, ' ')) // space delimiter
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
	}

	// display words and word counts
	int i = 0;
	for(auto word : wordmap)
	{
		i++;
		cout << word.first<<"\t"<< word.second;
		i%4 == 0 ? cout << endl : cout << "\t";
	}

	cout << "\n" << endl;
	cout<<"Done reading from `"<<filename<<"`."<<endl;
	cout << "\n" << endl;

	infile.close();

	return true;
}
