#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll countOne=0;
    ll countTwo=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            countOne++;
        }else if(arr[i]==2){
            countTwo++;
        }else{
            mp[arr[i]]++;
        }
    }
    ll ans=0;
    ll f=(countOne*(countOne-1))/2;
    ll s=(countTwo*(countTwo-1))/2;
    ll t=countOne*countTwo;
    ans=ans+(f+s+t);
    for(auto it:mp){
        ll c=it.second;
        ans=ans+(c*(c-1))/2;
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