#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    string readfile;
    ifstream myfile;
    myfile.open("../../../Desktop/bin/2019-fall-cs112/projects/pa2/pa2/tinypix.ppm");
    
    while(myfile.good() == true)
    {
            getline(myfile, readfile); 
            cout << readfile << endl;
    }
    return 0;
}
