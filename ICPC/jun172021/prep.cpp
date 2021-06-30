#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n = 0, k = 0, x = 0, ans = 0;
    cin>>n>>k;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x%=k;
        if(mp[(k-x)%k])
            ans+=2,mp[(k-x)%k]--;
        else
            mp[x]++;
    }
    cout<<ans<<endl;
    return 0;

}
