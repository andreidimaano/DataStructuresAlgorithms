#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int maxLength = 1;
        int start = 0;
        for(unsigned i = 0; i < s.size(); i++) {
            for(unsigned j = i; j < s.size(); j++) {
                bool flag = 1;
                for(unsigned k = 0; k < (j - i + 1) / 2; k++) {
                    if(s[i + k] != s[j - k]){
                        flag = 0;
                    }
                }
                if(flag && (j - i + 1) > maxLength){
                    maxLength = j - i + 1;
                    start = i;
                } 
            }
        }
        
        string ans = s.substr(start, maxLength);
        
        return ans;
    }
};