#include <string>
#include "taxBracket.h"

using namespace std;

void taxBracket::taxBracket() {

    taxData[i].incomeLow = tempLow;
    taxData[i].incomeHigh = tempHigh;
    taxData[i].taxBase = tempBase;
    taxData[i].taxRate = tempRate;

netIncomelow1 = 0.00;
netIncomehigh1 = 34999.99;
taxBase1 = 0.00;
taxRate1 = 0.16;
netIncomelow2 = 35000.00;
netIncomehigh2 = 69999.00;
taxBase2 = 5600.00;
taxRate2 = 0.22;
netIncomelow3 = 70000.00;
netIncomehigh3 = 99999.99;
taxBase3 = 13300.00;
taxRate3 = 0.26;
netIncomelow4 = 100000.00;
netIncomehigh4 = null;
taxBase4 = 21100.00;
taxRate4 = 0.29;

}

void taxBracket::~taxBracket() {

    delete taxData;

}
