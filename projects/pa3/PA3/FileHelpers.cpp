#include "FileHelpers.h" 

vector<string> readFile(ifstream& some_file) //straight from lecture files
{
	vector<string> result{};

	if (some_file.is_open() == true)
	{
		string line;

		while (some_file.good() == true)
		{
			getline(some_file, line);
			result.push_back(line);
		}
	}
	return result;
}

vector<string> readFile(const string& file_name) 
{
	ifstream input{ file_name };
	vector<string> result = readFile(input); 
	input.close();
	return result; //show me what you got
}