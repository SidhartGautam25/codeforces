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
        return ((temp) * (temp));
    else{
        ll p1=((x)*(temp));
        ll p2=((p1)*(temp))%mod;
        return p2;
    }
        
}




void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll count=0;
    ll j=0;
    for(ll i=0;i<n;i++){
        while(j<n and (arr[j]-arr[i]<=2)){
            j++;
        }
        ll s=j-i;
        if(s<3){
            continue;
        }else{
            count=count+ncr(s-1,2);
        }

    }
    cout<<count<<endl;
    
  
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