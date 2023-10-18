#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    double val=sqrt(n);
    ll ans=val;
    if(ans*ans==n){
        cout<<(ans-1)<<endl;
        return;
    }else{
        cout<<ans<<endl;
        return;
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