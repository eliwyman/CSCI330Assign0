#include <string>
#include "taxBracket.h"

using namespace std;

taxBracket::taxBracket() {

	loadBracket();

}

void taxBracket::loadBracket(){

	//Load Bracket with lowEndIncome, highEndIncome, BasePayable, TaxRate

	taxData[0][0] = 0.00;
	taxData[0][1] = 34999.99;
	taxData[0][2] = 0.00;
	taxData[0][3] = 0.16;

	taxData[1][0] = 35000.00;
	taxData[0][1] = 69999.00;
	taxData[0][2] = 5600.00;
	taxData[0][3] = 0.22;

	taxData[2][0] = 70000.00;
	taxData[0][1] = 99999.99;
	taxData[0][2] = 13300.00;
	taxData[0][3] = 0.26;

	taxData[4][0] = 100000.00;
	taxData[0][1] = maxIncome;
	taxData[0][2] = 21100.00;
	taxData[0][3] = 0.29;
}

taxBracket::taxBracket() {

	delete taxData;

}
