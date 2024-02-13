#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  998244353

            
 



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
   map<ll,ll>mpx;
   map<ll,ll>mpy;
   map<ll,ll>mpd;
   map<ll,ll>mpa;
   vector<pair<ll,ll>>arr(n);
   for(ll i=0;i<n;i++){
     cin>>arr[i].first;
     cin>>arr[i].second;
     ll x=arr[i].first;
     ll y=arr[i].second;
     mpx[x]++;
     mpy[y]++;
     mpd[x-y]++;
     mpa[x+y]++;
   }
   ll ans=0;
   for(ll i=0;i<n;i++){
       ll x=arr[i].first;
       ll y=arr[i].second;
    //   cout<<"mpx for x "<<x<<" is "<<mpx[x]<<endl;
    //   cout<<"mpy for y "<<y<<" is "<<mpy[y]<<endl;
    //   cout<<"mpa for x-y "<<x-y<<" is "<<mpd[x-y]<<endl;
    //   cout<<"mpa for x+y "<<x+y<<" is "<<mpa[x+y]<<endl;
       ans=ans+(mpx[x]-1);
       ans=ans+(mpy[y]-1);
       ans=ans+(mpa[x+y]-1);
       ans=ans+(mpd[x-y]-1);
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