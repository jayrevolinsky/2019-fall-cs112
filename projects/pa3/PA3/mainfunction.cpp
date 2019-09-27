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
	cout << "Enter the name of the file you want to read from: " << endl; //UserInput
	cin >> readFile;
	cout << "Enter the name of the file that you want to write to: " << endl; //FileOutput
	cin >> writeFile;
	HelperFunctions(readFile, writeFile);
	cout << "Edit completed" << endl;

	return 0;
}