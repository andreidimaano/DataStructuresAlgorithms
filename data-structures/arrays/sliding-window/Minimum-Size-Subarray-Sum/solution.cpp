#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int left = 0, right = 0, sum = 0, ans = INT_MAX;
        for(right; right < nums.size(); right++) {
            sum += nums.at(right);

            while(sum >= s) {
                ans = min(ans, right - left + 1);
                sum -= nums.at(left++);
            }
        }

        return (ans != INT_MAX) ? ans : 0;
    }

    int min(int x, int y) {
        return (x < y) ? x : y;
    }
};