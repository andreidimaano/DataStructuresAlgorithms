#include <string>
#include <unordered_map>
#include <limits.h>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> requiredChar = buildCharMap(t);
        unordered_map<char, int> windowChar;

        int left = 0, right = 0;

        int totalCharFreq = t.size(), currentCharFreq = 0;

        int minWindow = INT_MAX;
        string window = "";

        while(right < s.size()) {
            char charRight = s.at(right);
            windowChar[charRight]++;

            bool isRequiredChar = (requiredChar.find(charRight) != requiredChar.end());

            if(isRequiredChar) {
               bool requirementMet = requiredChar[charRight] == windowChar[charRight];

               if(requirementMet) {
                    currentCharFreq += requiredChar[charRight];
               }
            }

            while(currentCharFreq == totalCharFreq && left <= right) {
                char charLeft = s.at(left);
                int windowSize = right - left + 1;

                if(windowSize < minWindow) {
                    minWindow = windowSize;
                    window = s.substr(left, windowSize);
                }

                windowChar[charLeft]--;

                bool isRequiredChar = (requiredChar.find(charLeft) != requiredChar.end());
                
                if(isRequiredChar) {
                    bool requirementMet = requiredChar[charLeft] <= windowChar[charLeft];

                    if(!requirementMet) {
                        currentCharFreq -= requiredChar[charLeft];
                    }
                }

                left++;
            }
            right++;
        }



        return window;
    }
    unordered_map<char, int> buildCharMap(string t) {
        unordered_map<char, int> map;

        for(unsigned i = 0; i < t.size(); i++) {
            char c = t.at(i);
            map[c]++;
        }

        return map;
    }
};