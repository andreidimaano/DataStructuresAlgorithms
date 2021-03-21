#include <string>
#include <cstring>

using namespace std;

class Solution{
    string longestPalindrome(string s) {
        int start = 0, maxLength = 1;
        
        int n = s.size();
        bool dp[n][n];
        memset(dp, 0, sizeof(dp));

        for(unsigned i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        for(unsigned i = 0; i < n - 1; i++) {
            dp[i][i+1] = (s[i] == s[i+1]);
            start = i;
            maxLength = 2;
        }

        for(unsigned k = 2; k < n; k++) {
            for(unsigned i = 0; i < n - k; i++) {
                int j = i + k;

                if(dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;

                    if(k + 1 > maxLength) {
                        start = i;
                        maxLength = k + 1;
                    }
                }
            }
        }

        string ans = s.substr(start, maxLength);

        return ans;
    }
};