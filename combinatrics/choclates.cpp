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
    ll oc=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            oc++;
        }
    }
    if(oc==0){
        cout<<"0"<<endl;
        return;
    }
    if(oc==1){
        cout<<"1"<<endl;
        return;
    }
    ll ans=1;
    ll i=0;
    while(i<n and arr[i]==0){
        i++;
    }
    
    while(i<n){
        ll count=1;
        ll j=i+1;
        while(j<n and arr[j]==0){
            j++;
            count++;
        }
        if(j<n and arr[j]==1){
             ans=ans*count;
        }
       
        i=j;
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