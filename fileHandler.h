#include <fstream>

using namespace std;

class fileHandler {

	public:
		fileHandler();	
		int openFile(string file);
		int closeFile();
		int parseFile(string *arr);

	private:

		ifstream inf;
};
