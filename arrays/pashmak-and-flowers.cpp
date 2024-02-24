#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  LLONG_MAX

            
 
ll facto(ll n){
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}




ll ncr(ll n,ll r){
    ll prod=1;
      for(ll i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}



ll power(ll x, ll y)
{
    ll temp;
    if (y == 0){
        ll ans=1;
        return ans;

    }
       
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp%mod) * (temp%mod))%mod;
    else{
        ll p1=((x%mod)*(temp%mod))%mod;
        ll p2=((p1%mod)*(temp%mod))%mod;
        return p2;
    }
        
}



void solve(){
     ll n;
     cin>>n;
     vector<ll>arr(n);
     ll mmax=LLONG_MIN;
     ll mmin=LLONG_MAX;
     map<ll,ll>mp;
     for(ll i=0;i<n;i++){
        cin>>arr[i];
        mmax=max(mmax,arr[i]);
        mmin=min(mmin,arr[i]);
        mp[arr[i]]++;
     }
     ll count=mp[mmax]*mp[mmin];
     if(mmax==mmin){
         ll c=mp[mmax];
         ll temp=(c*(c-1))/2;
         count=temp;
     }
     ll ans=mmax-mmin;
     cout<<ans<<" "<<count<<endl;

    
    
    
  
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}