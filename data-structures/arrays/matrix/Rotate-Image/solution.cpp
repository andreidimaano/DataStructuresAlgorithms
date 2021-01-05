#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();

        for(unsigned i = 0; i < size; i++) {
            for(unsigned j = i; j < size; j++) {
                int temp = matrix.at(j).at(i);
                matrix.at(j).at(i) = matrix.at(i).at(j);
                matrix.at(i).at(j) = temp;
            }
        }

        for(unsigned i = 0; i < size; i++) {
            for(unsigned j = 0; j < size / 2; j++) {
                int temp = matrix.at(i).at(j);
                matrix.at(i).at(j) = matrix.at(i).at(size - 1 - j);
                matrix.at(i).at(size - 1 - j) = temp;
            }
        }
    }
};