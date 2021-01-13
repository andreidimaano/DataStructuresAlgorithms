#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int i = 0;
        for(unsigned i = 0; i < height.size(); i++){
            int currWater = 0;
            pair<int, int> maxMin = findMaxAndMin(height, i + 1);
            
            if(maxMin.first > i && maxMin.second > i) {
                currWater = getWater(height, i, maxMin.first);
                i = maxMin.first - 1;
            }
            
            water += currWater;
        }
        
        return water;
    }
    pair<int, int> findMaxAndMin(vector<int>& v, int i){
        pair<int, int> maxMin(0, 0);
        int maxHeight = v.at(i - 1);
        int maxIndex = 0;
        int minIndex = 0;
        while(i < v.size() && (!maxMin.first && !maxMin.second) || (maxMin.first <= maxMin.second) ){
            int currHeight = v.at(i);
            
            if(currHeight >= maxHeight) {
                maxMin.first = i;
            } else if (currHeight < maxHeight) {
                maxMin.second = i;
            }
        }
        
        return maxMin;
    }
    int getWater(vector<int>& v, int i, int j){
        int maxHeight = v.at(j);
        int water = 0;
        while(i < j){
            int currHeight = v.at(i++);
            if(currHeight < maxHeight) {
                water += (maxHeight - currHeight);
            }
        }
        
        return water;
    }
};