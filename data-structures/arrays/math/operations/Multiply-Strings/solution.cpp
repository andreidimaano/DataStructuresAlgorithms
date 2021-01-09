#include <string>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        string sum((num1.size() + num2.size()), '0');

        for(int i = num1.size() - 1; i >= 0; i--) {
            int carry = 0;
            for(int j = num2.size() - 1; j >= 0; j--) {
                int currSum = (num1.at(i) - '0') * (num2.at(j) - '0') + carry + (sum.at(i + j + 1) - '0');
                carry = currSum / 10;
                sum.at(i + j + 1) = currSum % 10;
            }
            sum.at(i) += carry;
        }

        size_t startpos = sum.find_first_not_of("0");
        if(startpos != string::npos) {
            return sum.substr(startpos);
        }
        
        return "0";
    }
};