#include <string>

using namespace std;

const float minIncome = 0.00;
const float maxIncome = 1000000000000.00;
const int numBrackets = 4;

class taxBracket {

	public:
		taxBracket();
		float taxData[numBrackets][numBrackets];
	
	private:
		void loadBracket();
};
