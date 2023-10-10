#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ll mod 1000000007


void solve(){
    ll n,m;
    cin>>n>>m;
    vector<unordered_set<int>>arr(m);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            arr[j].insert(s[j]);
        }
    }
    ll ans=1;
    for(int i=0;i<m;i++){
        int temp=arr[i].size();
        ans=(ans*temp)%mod;
    }
    ans=ans%mod;
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