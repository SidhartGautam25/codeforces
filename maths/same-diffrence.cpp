#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    ll ans=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int d=arr[i]-i;
        mp[d]++;
        ans=ans+(mp[d]-1);
    }
    cout<<ans<<endl;

 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}