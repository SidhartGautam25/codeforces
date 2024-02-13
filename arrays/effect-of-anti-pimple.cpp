#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353
            
 



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
   vector<ll>arr(n+1);
   for(ll i=1;i<=n;i++){
    cin>>arr[i];
   }
   vector<ll>mp(n+1);
   mp[0]=0;
   for(ll i=1;i<=n;i++){
     ll mmax=arr[i];
     ll j=2*i;
     while(j<n){
        mmax=max(mmax,arr[j]);
        j=j+i;
     }
     mp[i]=mmax;
   }
   sort(mp.begin(),mp.end());
   ll ans=0;
   for(ll i=n;i>0;i--){
         ll temp=((mp[i]%mod)*(power(2,i-1)%mod))%mod;
         ans=((ans%mod)+(temp%mod))%mod;
   }
   cout<<ans<<endl;
    
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