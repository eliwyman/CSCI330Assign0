#include <string>
#include "taxBracket.h"
#include "fileParser.h"

using namespace std;

void taxBracket::loadBracket(string arr[], int num) {

    //Let's assume I am passed a string array of tax brackets
    //then I will take each line and put them into taxBracket[]
    int numBrackets = num;
    string temp1;
    string temp2;

    //loop through the array of taxBracket data
    for (int i = 0; i < numBrackets; i++) {
        //grab one bracket of taxBracket data
        temp1 = arr[i];

        //process the bracket data
            for (int j=0; j<str.length(); j++)
            {
                if (temp1[j] == delimiter)
                    temp1[j] = ' ';

            }

            string arr[numBrackets];
            stringstream ss(temp1);
            while (ss >> temp2)
                array.push_back(temp2);

            return arr;
    }




                //find length of array and declare it MOVE TO MAIN
                int numBrackets = fileParser::numLines();   
                string arr[numBrackets] = fileParser::toStringArray(arr);
                //END

}