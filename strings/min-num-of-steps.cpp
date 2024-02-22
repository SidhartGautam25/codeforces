#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

            
 
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
   
    string s;
    cin>>s;
    ll n=s.size();
    //cout<<"n is "<<n<<endl;
    ll count=0;
    ll ans=0;
    ll bc=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='b'){
           // cout<<"b is at "<<i<<endl;
            count++;
            bc++;
        }else{
           // cout<<"we are at "<<i<<" and count is "<<count<<endl;
            ll t=((2%mod)*(count%mod))%mod;
           // cout<<"t is "<<t<<endl;
            count=t;

        }
    }
    ans=count-bc;
   // cout<<"count "<<count<<" bc "<<bc<<endl;
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