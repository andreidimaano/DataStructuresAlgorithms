#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, ans = 0;
        for(unsigned i = 0; i < nums.size(); i++) {
            if(nums.at(i) == 0) {
                count = 0;
            } else {
                ans = max(++count, ans);
            }
        }
        
        return ans;
    }
    int max(int x, int y) {
        return (x > y) ? x : y;
    }
};

// solution on January 5, 2021