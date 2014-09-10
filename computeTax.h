#include <string>
#include "taxBracket.h"

using namespace std;

class computeTax {

    public:
		computeTax();
		~computeTax();
        float computeTaxPayable(float inc);

    private: 
        float netIncome;
        float taxPayable;
		float taxBase;
		float taxRate;
		float taxBaseAmount;
		taxBracket *tax;

		int findBracket();
		float computeTaxPayable();



};

