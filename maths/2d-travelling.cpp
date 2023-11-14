#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>>arr(n);
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        arr[i].first=x;
        arr[i].second=y;

    }
    if(a<=k and b<=k){
        cout<<"0"<<endl;
        return;
    }
    ll mina=LLONG_MAX / 2;
    ll minb=LLONG_MAX / 2;
    for(ll i=0;i<k;i++){
        mina=min(mina,llabs(arr[i].first-arr[a-1].first)+llabs(arr[i].second-arr[a-1].second));
        minb=min(minb,llabs(arr[i].first-arr[b-1].first)+llabs(arr[i].second-arr[b-1].second));
    }
    ll ans=llabs(arr[a-1].first-arr[b-1].first)+llabs(arr[a-1].second-arr[b-1].second);
    if(ans<(mina+minb)){
        cout<<ans<<endl;
        return;
    }
    ans=mina+minb;
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