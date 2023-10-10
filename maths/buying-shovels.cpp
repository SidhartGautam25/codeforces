#include <bits/stdc++.h>
using namespace std;

#define ll long long



void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans=n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i<=k){
                ans=min(ans,n/i);
            }
            if(n/i<=k){
                ans=min(ans,i);
            }
        }
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