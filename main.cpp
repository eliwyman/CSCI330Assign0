#include <iostream>
#include <fstream>
#include <cstdlib>
#include "fileHandler.h"
#include "computeTax.h"
#include "userTaxData.h"
#include "parser.h"

using namespace std;

const int maxUsers = 100;
const char seperator = '\t';
const char delimiter = '\n';

int main (int argc, char* argv[]){

	try {
	
		int numUsers = 0;
		string arr[maxUsers];
		userTaxData allUsers[maxUsers];
		fileHandler fhand;
		computeTax chand;
		parser phand;
		string file = argv[1];

		//test that there was a file supplied on the command line
		if (argc == 1 || argc > 2) {
		    throw "Invalid number of files";
		}

		//open the file
		fhand.openFile(file);

		//push the file into a string array
		fhand.parseFile(arr);

		//handle user tax data
		for (int i = 0; i < maxUsers; i++) {
			if (arr[i] != "") {
				string s;
				double d;
				allUsers[i].name = phand.singleParse(arr[i], seperator);
				s = phand.doubleParse(arr[i], seperator, delimiter);
				d = stod(s);
				allUsers[i].netIncome = d;
			}
			numUsers = i;
			exit;
		}

		//compute user tax data
		for (int i = 0; i < numUsers; i++) {
			allUsers[i].taxPayable = chand.computeTaxPayable(allUsers[i].netIncome);
		}


		//print data
			cout << "\nUser Tax Info: \n\n";
		//print user info
		for (int i = 0; i < numUsers; i++) {
			cout "Name: " << allUsers[i].name;
			cout "Tax Payable: " << allUsers[i].taxPayable;
			cout "\n";
		}


		fhand.closeFile();


	} catch (string e){
		if (e != "") {
			cout << "Exception: " << e << " -- caught at line: ";
			//add line number functionality
		}
	}

    return 0;
}
