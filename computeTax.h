#include <string>
#include "taxBracket.h"

using namespace std;

Class taxBracket {
    public:
        float computeTax();
    private: 
        string taxValues[][brackets];
        float netIncome;
        float taxPayable;

}

