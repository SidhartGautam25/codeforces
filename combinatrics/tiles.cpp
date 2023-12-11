#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353


void solve(){
    int r,c;
    cin>>r>>c;
    ll ans=1;
    for(int i=1;i<=(r+c);i++){
        ans=((ans%mod)*2)%mod;
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