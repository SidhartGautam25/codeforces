#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   ll n,a,b;
   cin>>n>>a>>b;
   if(a>b){
    cout<<"1"<<endl;
    return;
   }
   int ans=ceil((n+a-1)/a);
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