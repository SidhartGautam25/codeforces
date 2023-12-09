#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,m;
    cin>>n>>m;
    unordered_map<ll,ll>mp;
    ll sum=0;
    for(ll i=1;i<=10;i++){
        ll temp=m*i;
        ll d=temp%10;
        sum=sum+d;
        mp[i]=sum;
    }
    ll count=n/m;
    ll q=count/10;
    ll r=count%10;
    ll ans=sum*q+mp[r];
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