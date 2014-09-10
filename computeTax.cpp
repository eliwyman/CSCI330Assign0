#include "computeTax.h"
#include <cmath>

using namespace std;

computeTax::computeTax(){

	tax = new taxBracket;

}

float computeTax::computeTaxPayable(float inc){

	netIncome = inc;
	if (inc < minIncome || inc > maxIncome) {
		throw "Out of Range";
		return 1;
	}
	
	if (findBracket() == 0) {
		return computeTaxPayable();
	}
	
	throw "Unforeseen Error";
	return 2;
}

int computeTax::findBracket(){

	for (int i = 0; i < numBrackets; i++) {
		if (netIncome >= tax->taxData[i][0]) {
			if (i+1 == numBrackets || netIncome < tax->taxData[i+1][0]) {
				taxBaseAmount = tax->taxData[i][0];				
				taxBase = tax->taxData[i][2];
				taxRate = tax->taxData[i][3];
				return 0;			
			}
		}
	}

	throw "Out of Range\n";
	return 1;

}

float computeTax::computeTaxPayable(){

	float sum = taxBase;
	float difference = taxRate * (netIncome - taxBaseAmount);
	taxPayable = sum + difference;
	return taxPayable;

}

computeTax::~computeTax(){

	delete tax;

}
