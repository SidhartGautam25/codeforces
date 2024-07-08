#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<pair<int,pair<int,int>>,int>mp;
    int ans=0;


    for(int i=0;i<n-2;i++){
        int a=arr[i];
        int b=arr[i+1];
        int c=arr[i+2];
        ans=ans+mp[make_pair(a,make_pair(b,0))];
        ans=ans+mp[make_pair(a,make_pair(0,c))];
        ans=ans+mp[make_pair(0,make_pair(b,c))];
        ans=ans-3*mp[make_pair(a,make_pair(b,c))];
        mp[make_pair(a,make_pair(b,c))]++;
        mp[make_pair(0,make_pair(b,c))]++;
        mp[make_pair(a,make_pair(b,0))]++;
        mp[make_pair(a,make_pair(0,c))]++;

    }
    cout<<ans<<endl;


}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}