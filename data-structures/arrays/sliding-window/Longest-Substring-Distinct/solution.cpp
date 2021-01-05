#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        unordered_map<char, int> charMap;
        int right = 0, left = 0, ans = 0;

        for(right; right < s.size(); right++) {
            char c = s.at(right);
            
            if(!charMap[c]) {
                charMap[c] = 1;
            } else {
                charMap[c]++;
            }
            
            while(charMap.size() > 2) {
                charMap[s.at(left)]--;
                if(!charMap[s.at(left)]) {
                    charMap.erase(s.at(left++));
                } else {
                    left++;
                }
            }


            ans = max(ans, right - left + 1);
        }

        return ans;
    }
    int max(int x, int y) {
        return (x > y) ? x : y;
    }
};