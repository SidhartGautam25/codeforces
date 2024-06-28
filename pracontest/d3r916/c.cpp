
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    ll ans=0;
    ll mx=0;
    ll sum=0;
    ll alt=0;
    
    for(ll i=0;i<min(n,k);i++){
        sum=sum+a[i];
        mx=max(mx,b[i]);
        ans=max(ans,sum+mx*(k-i-1));
    }
    cout<<ans<<endl;
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
