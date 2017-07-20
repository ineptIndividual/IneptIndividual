// readFileBin.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>

using namespace std;

#define FILE_IN "C:\\Users\\rlwal\\ws\\PCI_Express_Training_MCH_rev_11.ppt"

int main()
{

    ifstream binFileIn;
    binFileIn.open(FILE_IN, ios::in | ios::binary);
    if (!binFileIn.is_open()) {
        cerr << "File could not be opened" << endl;
        return(1);
    }

    binFileIn.seekg(0,binFileIn.end);
    int length=binFileIn.tellg();
    binFileIn.seekg(0,binFileIn.beg);

    char * buffer = new char [length];

    binFileIn.read(buffer,length);

    int i;
    for (i=0;i<length;i++) {
        cout << buffer[i];
    }
    delete[] buffer;

	return 0;
}


