#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  998244353

            
 
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
    vector<int>arr(n);
    int mmax=-1;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        mmax=max(mmax,arr[i]);
    }
    if(mp[mmax]>1){
        cout<<facto(n)<<endl;
        return;
        
    }else if(mmax-smax>=2){
        cout<<"0"<<<endl;
        return;

    }else{
        

        
    }


    
  
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