#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  LLONG_MAX

            
 
 ll facto(ll n){
    ll ans=1;
    for(int i=2;i<=n;i++){
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
        return ((temp) * (temp));
    else{
        ll p1=((x)*(temp));
        ll p2=((p1)*(temp))%mod;
        return p2;
    }
        
}




void solve(){
    int n;
    cin>>n;
    ll ans=2*(power(2,n)-1);
    cout<<ans<<endl;
    return;
    
    
    
  
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