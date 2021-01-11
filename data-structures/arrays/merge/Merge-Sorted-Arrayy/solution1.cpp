#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - 1;
        int j = m - 1;
        int k = n - 1;

        while((j >= 0) && (k >= 0)){
            nums1.at(i--) = (nums2.at(k) > nums1.at(j)) ? nums2.at(k--) : nums1.at(j--);
        }

        while(k >= 0 && i >= 0) {
            nums1.at(i--) = nums2.at(k--);
        }
    }
};