#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) {
            return true;
        }
        pair<int, int> interval = {0,0};
        int jumps = 0;
        while(true) {
            jumps++;
            int can_reach = -1;
            for(unsigned i = interval.first; i <= interval.second; ++i) {
                can_reach = max(can_reach, i + nums.at(i));
            }
            if(can_reach >= n - 1) {
                return true;
            }
            interval = {interval.second + 1, can_reach};
            if(interval.first > interval.second) {
                return false;
            }
        }
        return false;
    }
    
    int max(int x, int y) {
        return (x > y) ? x : y;
    }
};