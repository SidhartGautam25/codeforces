#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>polls(n);
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        polls[i].first=x;
        polls[i].second=y;
    }
    vector<ll>xsum(n);
    vector<ll>ysum(n);
    xsum[n-1]=0;
    ysum[n-1]=0;
    for(ll i=n-2;i>=0;i--){
        ll x=polls[i+1].first;
        ll y=polls[i+1].second;
        xsum[i]=xsum[i+1]+x;
        ysum[i]=ysum[i+1]+y;
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x=polls[i].first;
        ll y=polls[i].second;
        ans=ans+(x*x)*(n-1);
        ans=ans+(y*y)*(n-1);
        ans=ans-2*x*(xsum[i]);
        ans=ans-2*y*(ysum[i]);
    }
    cout<<ans<<endl;
    return;

    
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