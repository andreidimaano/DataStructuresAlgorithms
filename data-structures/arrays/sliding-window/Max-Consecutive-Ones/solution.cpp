#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 0 ) return 0;
        int count = 0, ans = INT_MIN;

        for(unsigned i = 0; i < nums.size(); i++) {
            if(nums.at(i) == 1) {
                count++;
            } else {
                ans = max(ans, count);
                count = 0;
            }
        }

        return max(ans, count);
    }

    int max(int x, int y) {
        return (x > y) ? x : y;
    }
};