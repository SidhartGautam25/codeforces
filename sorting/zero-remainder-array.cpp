#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
     ll n,k;
     cin>>n>>k;
     ll x=0;
     vector<ll>arr(n);
     ll ans=0;
     unordered_map<ll,ll>mp;
     
     ll count=0;
     for(int i=n-1;i>=0;i--){
        cin>>arr[i];
        arr[i]=arr[i]%k;
        ll temp=arr[i];
        if(temp%k==0){
            continue;
        }else{
            ll r=k-temp;
            if(mp.find(r) != mp.end()){
              r=mp[r]+k;
            }
            ll t=k-temp;
            mp[t]=r;
            ans=max(ans,r);
        }

     }
     if(ans != 0){
        ans=ans+1;
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