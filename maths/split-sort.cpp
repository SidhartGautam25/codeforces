#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    ll ans=0;
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    for(ll i=2;i<=n;i++){
        if(mp[i-1]>mp[i]){
            ans++;
        }else{
            continue;
        }
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