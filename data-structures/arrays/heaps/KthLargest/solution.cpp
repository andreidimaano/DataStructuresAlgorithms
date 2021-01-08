#include <queue>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

class Solution {
public:
    int heapFindKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minheap;
        
        for(unsigned i = 0; i < nums.size(); i++) {
            minheap.push(nums.at(i));
            if(minheap.size() > k) {
                minheap.pop();
            }
        }
        
        return minheap.top();
    }
    int sortFindKthLargest(vector<int>& nums, int k) {
        vector<int> ans = nums;
        sort(nums.begin(), nums.end());
    
        return ans.at(ans.size() - k);
    }    
    int partition(vector<int>& nums, int left, int right, int k) {
        int i = left;
        int pivot = right;
        int j = left;
        
        for(j; j < pivot; j++) {
            if(nums.at(j) <= nums.at(right)){
                swap(nums, i++, j);
            }
        }
        
        swap(nums, i, pivot);
        
        int count = right - i + 1;
        
        if(count == k) {
            return nums.at(i);
        } else if (count > k) {
            return partition(nums, i + 1, right, k);
        }
        return partition(nums, left, i - 1, k - count);
    }
    void swap(vector<int>& v, int x, int y) {
        int temp = v.at(x);
        v.at(x) = v.at(y);
        v.at(y) = temp;
    }       
};