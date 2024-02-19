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
     string a,b;
     cin>>b>>a;
     ll n=a.size();
     ll m=b.size();
     vector<ll>count(n+1);
     count[0]=0;
     ll c=0;
     for(ll i=0;i<n;i++){
        if(a[i]=='1'){
            c++;
        }
        count[i+1]=c;
     }
     ll ans=0;
     ll size=n-m+1;
     for(ll i=0;i<m;i++){
        ll ct1=count[size+i]-count[i];
        ll ct0=size-ct1;
        if(b[i]=='1'){
            ans=ans+ct0;
        }else{
            ans=ans+ct1;
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