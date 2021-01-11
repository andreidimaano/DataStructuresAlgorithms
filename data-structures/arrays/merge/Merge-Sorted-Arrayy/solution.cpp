#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums1_copy = nums1;
        
        int i = 0;
        int j = 0;
        int k = 0;
        
        while(j < m && k < n){
            nums1.at(i++) = (nums1_copy.at(j) < nums2.at(k)) ? nums1_copy.at(j++) : nums2.at(k++);
        }
        
        while(j < m) {
            nums1.at(i++) = nums1_copy.at(j++);
        }
        
        while(k < n){
            nums1.at(i++) = nums2.at(k++);
        }
    }
};