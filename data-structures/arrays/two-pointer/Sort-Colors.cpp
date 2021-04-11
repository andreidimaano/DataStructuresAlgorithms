#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroBoundary = 0;
        int twoBoundary = nums.size() - 1;
        int curr = 0;
        
        
        while(curr <= twoBoundary) {
            if(nums[curr] == 0) {
                swap(nums[curr++], nums[zeroBoundary++]);
            } else if(nums[curr] == 2) {
                swap(nums[curr], nums[twoBoundary--]);
            } else {
                curr++;
            }
        }
    }
};