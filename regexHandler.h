#include <string>
#include <regex>

using namespace std;

class regexHandler {

    public:
        bool isMatch(string match, string str);

    private:
        string regex;
        regex reg1;
    
}
