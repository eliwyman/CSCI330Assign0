#include <iostream>
#include <string>
#include "fileHandler.h"

using namespace std;

fileHandler::fileHandler(string file) {
    
    //save the name of the file to the class variable
    fileName = file;
    numLines = -1;
}

void fileHandler::openFile() {

    //open the file
    inf.open(fileName);

    //test the file to have been opened properly
    if (inf.fail()) {
        throw 1;
        exit;
    }
}

void fileHandler::closeFile() {

    //close the file
    inf.close();
}

string* fileHandler::toStringArray(string arr[]) {

    //until the file ends, grabs one line at a time
    int i = 0;

    while(!inf.eof() && i <= maxFileSize) {
        inf >> currLine;
    //do some checking on currLine?

        arr[i] = currLine;
        i++;
    }
    numLines = i;
}

int fileHandler::numLines() {

    //returns number of lines in the file
    return numLines;

    //check to see if the numFiles has been updated
    if (numLines >= 0) {
        return numLines;
    }
    throw 2;
}
