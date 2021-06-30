#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cin >> n;
  
  vector<long long> skill(n,0);
  for(int i = 0; i < n; i++) {
    cin >> skill[i];
  }

  sort(skill.begin(), skill.end());
  int ans = 1;
  for(int i = 0, j = 1; i < n && j < n && i <= j;) {
    if(skill[j]-skill[i] <= 5) {
      j++;
    } else {
      i++;
    } 
    ans = max(ans, j - i);
  }
  cout << ans << endl;

  return 0;
}
