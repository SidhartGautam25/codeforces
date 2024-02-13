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

ll facto(ll n){
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=((ans%mod)*(i%mod))%mod;
    }
    return ans;
}

void solve(){
   string s;
   cin>>s;
   ll n=s.size();
   ll ans=0;
   ll prod=1;
   ll i=0;
   ll db=0;
   while(i<n){
      ll count=0;
      char c=s[i];
      while(s[i]==c){
        count++;
        i++;
      }
      if(count>1){
          db++;
      }
      ans=ans+(count-1);
      
      //prod=((prod%mod)*(facto(count)%mod))%mod;
      prod=((prod%mod)*(count%mod))%mod;
      
   }
   prod=((prod%mod)*(facto(ans)%mod))%mod;
   cout<<ans<<" "<<prod<<endl;
    
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