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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    map<ll,map<ll,ll>>mp;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll modx=arr[i]%x;
        ll mody=arr[i]%y;
        ans=ans+mp[-modx][mody];
        ans=ans+mp[x-modx][mody];
        mp[modx][mody]++;

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