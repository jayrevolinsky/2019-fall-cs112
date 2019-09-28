#include <string>
#include <vector>
#include <exception>
#include <fstream>
#include <iterator>
#include <iostream>
#include <sstream>
#include "FileHelpers.h"
#include "HelperFunctions.h" 

using namespace std;

void HelperFunctions(string userInput, string fileOutput)
{
	ofstream showOutput{ fileOutput };
	vector<string> imageData = readFile(userInput);
	string readImage;
	int i = 0;
	int j;

	/*
	for (j = 3; j < imageData.size(); j++)
	{
	string valueSpace = " ";
	str.insert(37, " ");
	}
	*/
	
	

	showOutput << imageData[0] << endl << imageData[1] << endl << imageData[2] << endl;

	for (j = 3; j < imageData.size(); j++)
	{
		istringstream sortValues{ imageData[j] }; //store values read
		getline(sortValues, readImage);
		istringstream rowValues{ readImage }; //tell the difference between rows

		while (rowValues.good() == true) //read rows until finished
		{
			getline(rowValues, readImage, ' ');
			if (readImage == "" || readImage == " ") //look for spaces
			{
				i = 0;
			}
			else if(i == 0 || i % 3 == 0) //look for values
			{
				showOutput << 0 << " "; //change those values
				i++; //read additional values
			}
			else
			{
				showOutput << stoi(readImage) << " ";
				i++;
			}
		}
		showOutput << endl;
	}
	showOutput.close(); //end function once file is changed
}