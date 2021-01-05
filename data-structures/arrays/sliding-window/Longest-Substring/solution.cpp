#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int ans = 0, left = 0, right = 0;

        for(right; right < s.size(); right++) {
            char c = s.at(right);

            while(charSet.find(c) != charSet.end()){
                charSet.erase(s.at(left++));
            }

            charSet.insert(c);
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
    int max(int x, int y) {
        return (x > y) ? x : y;
    }
};