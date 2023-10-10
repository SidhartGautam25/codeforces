#include <bits/stdc++.h>
using namespace std;

#define ll long long




void solve(){
   ll n,k;
   cin>>n>>k;
   if(k<n){
      cout<<k<<endl;
   }else{
      if(k%(n-1)==0){
        ll ans=k+(k/(n-1))-1;
        cout<<ans<<endl;
      }else{
        ll ans=(n-1)*(k/(n-1))+(k/(n-1))+(k%(n-1));
        cout<<ans<<endl;
      }

   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}