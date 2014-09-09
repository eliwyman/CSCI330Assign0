#include <string>

using namespace std;

const string configFile = "config.txt";
const string delimiter = '\';
const string ignore = ',';
const int maxBrackets = 100;

class taxBracket {

    int numBrackets;
    taxData taxBracket[maxBrackets];
    
    struct taxData {

        float netIncome
        float taxBase;
        float taxRate;

    }

    void loadBracket();

}
