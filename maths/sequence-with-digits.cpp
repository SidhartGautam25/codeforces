#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

pair<ll,ll> getdigits(ll n){
    ll mmin,mmax;
    ll t=n%10;
    n=n/10;
    mmin=t;
    mmax=t;
    while(n>0){
        t=n%10;
        n=n/10;
        mmin=min(mmin,t);
        mmax=max(mmax,t);

    }
    pair<ll,ll>ans;
    ans.first=mmin;
    ans.second=mmax;
    return ans;
}
void solve(){
    ll a,k;
    cin>>a>>k;
    ll temp=a;
    ll i=1;
    while(i<k){
        pair<ll,ll>t=getdigits(temp);
        ll mind=t.first;
        ll maxd=t.second;
        if(mind==0){
            cout<<temp<<endl;
            return;
        }
        temp=temp+mind*maxd;
        i++;
    }



    cout<<temp<<endl;

 
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