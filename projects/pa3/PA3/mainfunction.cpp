#include <string>
#include <fstream>
#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include "HelperFunctions.h" //big help from tutors
#include "FileHelpers.h" //borrowed from lecture

using namespace std;

int main()
{
	string readFile;
	string writeFile;
	cout << "Enter source file: " << endl; //UserInput
	cin >> readFile;
	cout << "Enter destination file " << endl; //FileOutput
	cin >> writeFile;
	HelperFunctions(readFile, writeFile);
	cout << "Program complete" << endl;

	return 0;
}