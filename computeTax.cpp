#include "computeTax.h"
#include <cmath>

using namespace std;

float computeTax::computeTaxPayable(float inc, taxBracket tb){

	netIncome = inc;
	if (inc < minIncome || inc > maxIncome) {
		throw "Out of Range\n";
		return 1;
	}
	
	if (findBracket(tb) == 0) {
		return computeTaxPayable();
	}
}

int computeTax::findBracket(taxBracket tb){

	for (int i = 0; i < numBrackets; i++) {
		if (netIncome >= tb.data[i].incomeLow) {
			if (i+1 = numBrackets || netIncome < tb.data[i+1].incomeLow) {
				taxBase = tb.data[i].taxBase;
				taxRate = tb.data[i].taxRate;
				taxBracket = tb.data[i].incomeLow;
				return 0;			
			}
		}
	}

	throw "Out of Range\n";
	return 1;

}

float computeTax::computeTaxPayable(){

	float sum = taxBase;
	float difference = taxRate * (netIncome - taxBracket);
	taxPayable = sum + difference;
	return taxPayable;

}
