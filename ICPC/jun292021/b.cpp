#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(),a.end());
  
  int ans = 0;

  for(int i = 0; i < n - 1; i = i + 2) {
    ans += (a[i+1] - a[i]);
  }

  cout << ans;
}
