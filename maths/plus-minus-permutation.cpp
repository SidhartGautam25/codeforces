#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


ll lcm(ll x,ll y){
    ll g=__gcd(x,y);
    ll prod=x*y;
    ll l=prod/g;
    return l;
}


void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll largest=n/x;
    ll smallest=n/y;
    ll common=n/lcm(x,y);
    largest=largest-common;
    smallest=smallest-common;
    ll smallsum=(smallest*(1+smallest))/2;
    ll largesum=(largest*(2*n-largest+1))/2;
    ll ans=largesum-smallsum;
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