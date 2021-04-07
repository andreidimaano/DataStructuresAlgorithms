#include <iostream>
#include <vector>

using namespace std;

int arrayToInt(const vector<int>& arr) {
    int ans = 0;
    int counter = 1;
    for(int i = arr.size() - 1; i >= 0; i--) {
        int temp = counter * arr[i];
        ans += temp;
        counter *= 10;
    }

    return ans;
}

int main() {
    // int* ptr;

    // int arr[5] = {0,6,2,3,1};

    // ptr = arr;

    // for(int i = 0; i < 5; i++) {
    //     cout << 12 / *(ptr + (i / 2)) << " ";
    // }

    // vector<int> arr = {1, 2, 3, 5, 6, 1, 2,3}; 
    // cout << arrayToInt(arr);
}


/*
ptr = arr; on line 10. This means that ptr is the memory location of arr[0].
*ptr will get the value at the memory location.

evaluating *(ptr + (i / 2)):
i: 0 -> 0 + 0 / 2 = arr[0] = 2
i: 1 -> 0 + 1 / 2 = arr[0] = 2
i: 2 -> 0 + 2 / 2 = arr[1] = 6
i: 3 -> 0 + 3 / 2 = arr[1] = 6
i: 4 -> 0 + 4 / 2 = arr[2] = 2

evaluating output:
i: 0 -> 12 / 2 = 6
i: 1 -> 12 / 2 = 6
i: 2 -> 12 / 6 = 2
i: 3 -> 12 / 6 = 2
i: 4 -> 12 / 2 = 6
*/