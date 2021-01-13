#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int leftMax = 0, rightMax = 0;
        int left = 0, right = height.size() - 1;

        while(left < right) {
            if(height.at(left) < height.at(right)){
                int currHeight = height.at(left++);
                (currHeight > leftMax) ? leftMax = currHeight : ans += leftMax - currHeight;
            } else {
                int currHeight = height.at(right--);
                (currHeight > rightMax) ? rightMax = currHeight : ans += rightMax - currHeight;
            }
        }
        
        return ans;
    }
};