#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {5,4,10,3,7,8};
    vector<vector<int>> dp (v.size() + 1, vector<int> (v.size() + 1, 0));

    for(int i = 1; i < dp.size(); i++) {
        dp[i][i] = v[i - 1];
    }

    // dp[1][2] = max(v[1-1] + min(dp[1+2][2], dp[1+1][2-1]), v[2-1] + min(dp[1+2][2], dp[1+1][2-1]))
    for(int j = 2; j < dp.size(); j++) {
        for(int i = j - 1; i >= 1; i--) {
            if(i + 2 < dp.size()) {
                dp[i][j] = max(v[i-1] + min(dp[i+2][j], dp[i+1][j-1]), v[j-1] + min(dp[i+1][j-1], dp[i][j - 2]));
            } else {
                dp[i][j] = max(v[i-1] + min(0, dp[i+1][j-1]), v[j-1] + min(dp[i+1][j-1], dp[i][j - 2]));
            }
        }
    }

    
    for(int i = 0; i < dp.size(); i++) {
        for(int j = 0; j < dp.size(); j++) {
            cout << setw(4) << dp[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}