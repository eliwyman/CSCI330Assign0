#include <string>

using namespace std;

const int numBrackets = 4;
const float netIncomelow1 = 0.00;
const float netIncomehigh1 = 34999.99;
const float taxBase1 = 0.00;
const float taxRate1 = 0.16;
const float netIncomelow2 = 35000.00;
const float netIncomehigh2 = 69999.00;
const float taxBase2 = 5600.00;
const float taxRate2 = 0.22;
const float netIncomelow3 = 70000.00;
const float netIncomehigh3 = 99999.99;
const float taxBase3 = 13300.00;
const float taxRate3 = 0.26;
const float netIncomelow4 = 100000.00;
const float netIncomehigh4 = null;
const float taxBase4 = 21100.00;
const float taxRate4 = 0.29;

class taxBracket {

    taxData taxBracket[numBrackets];
    
    struct taxData {

        float incomeLow;
        float incomeHigh;
        float taxBase;
        float taxRate;

    }

    taxBracket();

}
