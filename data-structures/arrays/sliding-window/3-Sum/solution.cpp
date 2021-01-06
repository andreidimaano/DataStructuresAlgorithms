#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(unsigned i = 0; i < nums.size(); i++) {
            if(i == 0 || (nums.at(i) != nums.at(i -1))){
                checkSum(ans, nums, i);
            }
        }

        return ans;
    }  
    void checkSum(vector<vector<int>>& ans, const vector<int>& nums, const int& i) {
        int low = i + 1;
        int high = nums.size() - 1;
        while(low < high) {
            int sum = nums.at(low) + nums.at(high) + nums.at(i);
            if(sum > 0) {
                high--;
            } else if (sum < 0) {
                low++;
            } else {
                ans.push_back({nums.at(i), nums.at(low++), nums.at(high--)});
                while(low < high && nums.at(low) == nums.at(low - 1)) low++;
            }
        }
    }
};
