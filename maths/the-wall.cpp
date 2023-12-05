#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll lcm(ll a,ll b){
    ll hcf=__gcd(a,b);
    ll p=a*b;
    ll ans=p/hcf;
    return ans;
}
void solve(){
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll l=lcm(x,y);
    // ll f=a/l;
    // ll mul=l;
    // ll j=2;
    // ll count=0;
    // while(mul<=b){
    //     if(mul>=a and mul<=b){
    //         count++;
    //     }
    //     mul=l*j;
    //     j++;
    // }
    // cout<<count<<endl;
    ll f=a/l;
    if(f*l != a){
        f=f+1;
    }
    ll s=b/l;
    ll ans=s-f+1;
    if(b<l){
        ans=0;
    }
    cout<<ans<<endl;




 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    // cin>>t;
    while(t--){
        solve();
     }

    return 0;
}