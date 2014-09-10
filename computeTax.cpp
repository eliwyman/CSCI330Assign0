#include "computeTax.h"
#include <cmath>

using namespace std;

float computeTax::computeTaxPayable(float inc, taxData data[]){

	netIncome = inc;
	if (inc < minIncome || inc > maxIncome) {
		throw "Out of Range\n";
		return 1;
	}
	
	if (findBracket(data[]) == 0) {
		return computeTaxPayable();
	}
}

int computeTax::findBracket(taxData data[]){

	for (int i = 0; i < numBrackets; i++) {
		if (netIncome >= data[i].incomeLow) {
			if (i+1 = numBrackets || netIncome < data[i+1].incomeLow) {
				taxBase = data[i].taxBase;
				taxRate = data[i].taxRate;
				taxBracket = data[i].incomeLow;
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
