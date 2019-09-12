#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int i;
	ifstream myfile("tinypix.ppm");
	if (myfile.is_open())
	{
		while (myfile.good() == true)
		{
			string readFile;
			getline(myfile, readFile);
			cout << readFile << endl;
		}
	}
	return 0;
} 
