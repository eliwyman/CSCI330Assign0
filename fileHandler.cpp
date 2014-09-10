#include "fileHandler.h"

using namespace std;

fileHandler::fileHandler(){

}

int fileHandler::openFile(string file){

	//open the file
	inf.open(file.c_str());

	//test the file to have been opened properly
	if (inf.fail()) {
	    throw "File error";
		return 1;
	}

	return 0;

}


int fileHandler::closeFile(){

    inf.close();
	return 0;

}

int fileHandler::parseFile(string *arr){
	
	int i = 0;

	while(!inf.eof()) {

		inf >> arr[i];
		i++;
	}

	return 0;
}
