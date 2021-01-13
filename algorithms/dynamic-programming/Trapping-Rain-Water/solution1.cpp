#include <vector>
using namespace std;

class Solution {
public:
    int DPtrap(vector<int>& height) {
        int ans = 0;
        int size = height.size();
        if(size != 0) {
            vector<int> leftMax(size), rightMax(size);

            leftMax.at(0) = height.at(0);
            for(unsigned i = 1; i < size; i++) {
                leftMax.at(i) = max(height.at(i), leftMax.at(i - 1));
            }

            rightMax.at(size - 1) = height.at(size - 1);
            for(int i = size - 2; i >= 0; i--) {
                rightMax.at(i) = max(height.at(i), rightMax.at(i + 1));
            }

            for(unsigned i = 0; i < size; i++) {
                ans = min(leftMax.at(i), rightMax.at(i)) - height.at(i);
            }
        }

        return ans;
    }
    int min (int x, int y) {
        return x < y ? x : y;
    }

    int max (int x, int y) {
        return x > y ? x : y;
    }
};