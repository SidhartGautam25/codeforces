#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll fsum=0;
    unordered_map<ll,ll>mp;
   
    ll ma=LLONG_MIN,mi=LLONG_MAX;
    mp[-1]=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        ma=max(ma,arr[i]);
        mi=min(mi,arr[i]);
        fsum=fsum+arr[i];
        mp[i]=fsum;
    }
    ll lsum=0;
    for(ll i=n-1;i>=0;i--){
       
 
    }
    ll ans=ma-mi;
    for(ll i=1;i<=n/2;i++){
       ll maxi=LLONG_MIN;
       ll mini=LLONG_MAX;
       if(n%i != 0){
        continue;
       }
       for(ll j=i-1;j<n;j=j+i){
          ll temp=mp[j]-mp[j-i];
          maxi=max(maxi,temp);
          mini=min(mini,temp);
       }
       ans=max(ans,maxi-mini);
 
 
 
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