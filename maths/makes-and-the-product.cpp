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
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    // for(auto it:mp){
    //     cout<<"num is "<<it.first<<" and freq is "<<it.second<<endl;
    // }
    ll ans=1;
    ll i=0;
    for(auto it:mp){
        if(i>=3){
            break;
        }
        ll a=it.first;
        ll b=it.second;
        if(i==0){
             if(b>=3){
                ans=ans*ncr(b,3);
                i=3;
             }else if(b==2){
                i=2;
             }else if(b==1){
                i=1;
             }
        }else if(i>=1 and i<3){
            ll rem=3-i;
            if(b>=rem){
                ans=ans*ncr(b,rem);
                i=3;
            }else if(b<rem){
                i=i+b;
            }
        }

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