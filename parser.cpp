#include <string>
#include <sstream>
#include "parser.h"

using namespace std;

string parser::singleParse(string str, string del) {

    string delimiter = del;
    string sub = str.substr(0, s.find(delimiter));
    return sub;

}

string parser::doubleParse(string str, string headDel, string tailDel){

    string headDelimiter = headDel;
    string tailDelimiter = tailDel;
    string sub = str.substr(s.find(headDelimiter), s.find(tailDelimiter));
    return sub;

}
