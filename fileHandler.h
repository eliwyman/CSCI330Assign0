#include <iostream>
#include <string>

using namespace std;

const int maxFileSize = 100;

class fileHandler {
    
    string fileName;
    string currLine;
    int numLines;
    ifstream inf;

    fileHandler();
    void openFile();
    void closeFile();
    string* toStringArray(string arr[]);
    int numLines();

}
