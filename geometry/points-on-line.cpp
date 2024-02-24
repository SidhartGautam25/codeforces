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
   ll n,d;
   cin>>n>>d;
   vector<ll>arr(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   if(n<3){
     cout<<"0"<<endl;
     return;
   }
   sort(arr.begin(),arr.end());
   ll i=0;
   ll j=2;
   ll ans=0;
   while(i<n){
      while(j<n and arr[j]-arr[i]<=d){
          j++;
      }
      ll m=j-i-1;
      if(m<2){
          i++;
        continue;
      }
      ll t=(m*(m-1))/2;
      ans=ans+t;
      i++;

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