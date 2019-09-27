#pragma once
#ifndef FILE_HELPERS_H
#define FILE_HELPERS_H

#include <string>
#include <vector>
#include <fstream>

using namespace std;

vector<string> readFile(ifstream& some_file);
vector<string> readFile(const string& file_name);

#endif