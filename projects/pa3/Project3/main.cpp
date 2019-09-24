#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <exception>
#include <vector>
#include "HelperFunctions.h"
#include "FileHelpers.h"

int main(int argc, char* argv[])
{
	vector<string> data = readFile("tinypix.ppm");

	cout << "Image Format: " << data[0] << endl;
	istringstream second_row{ data[1] };
	string temp_data;

	getline(second_row, temp_data, ' ');
	int width = stoi(temp_data);
	getline(second_row, temp_data, ' ');
	int height = stoi(temp_data);
	cout << "Width: " << width << endl
		<< "Height: " << height << endl;

	cout << "Image format: " << data[2] << endl;

	cout << "data: " << endl;
	for (int i = 3; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}

	for (int i = 0; i < data.size(); i++)
	{
		if (i % 2 == 0)
		{
			cout << "even: " << data[i] << endl;
		}
		else
		{
			cout << "odd: " << data[i] << endl;
		}
	}

	return 0;

}