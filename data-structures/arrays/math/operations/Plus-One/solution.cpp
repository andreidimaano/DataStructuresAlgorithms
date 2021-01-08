#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits.at(i)++ < 9){
                return digits;
            }
            digits.at(i) = 0;
        }

        digits.at(0) = 1;
        digits.push_back(0);
        return digits;
    }
};