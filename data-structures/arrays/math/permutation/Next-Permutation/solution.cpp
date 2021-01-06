#include <vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the strictly decreasing subset
        int i = nums.size() - 2;
        while(i >= 0 && nums.at(i + 1) <= nums.at(i)) {
            i--;
        }

        //find the first number greater and swap
        if(i >= 0) {
            int j = nums.size() - 1;
            while(j >= 0 && nums.at(j) <= nums.at(i)) {
                j--;
            }
            swap(nums, i , j);
        }

        //reverse
        reverse(nums, i + 1);
    }

    void swap(vector<int>& nums, int i, int j) {
        int temp = nums.at(i);
        nums.at(i) = nums.at(j);
        nums.at(j) = temp;
    }

    void reverse(vector<int>& nums, int i) {
        int j = nums.size() - 1;
        while(i < j) {
            swap(nums, i++ , j--);
        }
    }
};