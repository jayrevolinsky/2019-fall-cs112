#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream myfile;
	myfile.open("tinypix.ppm");
	if (myfile.fail())
	{
		cout << "The file does not work" << endl;
	}
	else
	{
		string readfile;
		while (getline(myfile, readfile))
		{
			cout << readfile << endl;
		}
		myfile.close();
	}
	return 0;
} 
