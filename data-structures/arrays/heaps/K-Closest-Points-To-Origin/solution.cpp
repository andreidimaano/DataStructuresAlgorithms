#include <vector>
#include <queue>
#include <math.h>
using namespace std;

struct compare {
    bool operator()(const pair<int, int> l, const pair<int, int> r) {
        return l.first < r.first;
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, compare> maxHeap;
        vector<vector<int>> ans;
        
        for(unsigned i = 0; i < points.size(); i++) {
            vector<int> orderedPair = points.at(i);
            int distance = pow(orderedPair.at(0), 2) + pow(orderedPair.at(1), 2);
            
            pair<int, int> currPair(distance, i);
            
            maxHeap.push(currPair);
            if(maxHeap.size() > K) {
                maxHeap.pop();
            }
        }
        
        while(K-- > 0) {
            int index = maxHeap.top().second;
            maxHeap.pop();
            ans.push_back(points.at(index));
        }
        return ans;
    }
};