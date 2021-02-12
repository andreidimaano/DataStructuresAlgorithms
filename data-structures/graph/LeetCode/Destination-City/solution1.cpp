#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> set;
        for(unsigned i = 0; i < paths.size(); i++) {
            set.insert(paths[i][0]);
        }
        
        for(unsigned i = 0; i < paths.size(); i++) {
            if(set.find(paths[i][1]) == set.end()) return paths[i][1];
        }
        
        return "";
    }
};