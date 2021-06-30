#include <vector>
#include <iostream>

using namespace std;

int main() {
  int t,n,k;
  cin >> t; 
  for(int x = 0; x < t; x++) {
    cin >> n >> k;
    int div = n/k;
    int rem = n%k;
  
    for(int i = 0; i < k; i++) {
      char curr = 'a' + i;
      for(int j = 0; j < div; j++) {
        cout << curr;
      }
    }
  
    char last = 'a' + k - 1;
    for(int k = 0; k < rem; k++) {
      cout << last;
    }
    cout << endl;
  }

  return 0;
}
