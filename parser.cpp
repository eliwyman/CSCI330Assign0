#include <string>
#include <sstream>

using namespace std;

parser::parser(string del, int fields) {

    delimiter = del;
    numFields = fields;


}

string* parser::lineParser (string str){

    for (int j=0; j<str.length(); j++)
    {
        if (str[i] == delimiter)
            str[i] = ' ';

    }

    string arr[numFields];
    stringstream ss(str);
    string temp;
    while (ss >> temp)
        array.push_back(temp);

    return arr;

}
