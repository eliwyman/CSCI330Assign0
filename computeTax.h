#include <string>
#include "taxBracket.h"

using namespace std;

class computeTax {
    public:
        float computeTaxPayable(float inc, taxData data[]);
    private: 
        float netIncome;
        float taxPayable;
		float taxBase;
		float taxRate;
		float taxBracket;

		int findBracket(taxData data[]);
		float computeTaxPayable();

};

