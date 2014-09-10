#include <string>
#include "taxBracket.h"

using namespace std;

class computeTax {
    public:
		computeTax();
        float computeTaxPayable(float inc, taxBracket tb);
    private: 
        float netIncome;
        float taxPayable;
		float taxBase;
		float taxRate;
		float taxBracket;

		int findBracket(taxBracket tb);
		float computeTaxPayable();

};

