#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k;
    cin>>n>>k;
    ll i=0;
    ll ans=0;
    ll power=1;
    while(i<31){
          //ans=ans+pow(n,i)*(k and 1<<i);
          if(k & (1<<i)){
              ans=(ans+power)%mod;
          }
          //ll temp=((power%mod)*((k && 1<<i)%mod))%mod;
          power=((power%mod)*n)%mod;
          //ans=(ans+temp)%mod;
          i++;
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