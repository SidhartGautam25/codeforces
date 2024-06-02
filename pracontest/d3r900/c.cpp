#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

// for geometry
// https://victorlecomte.com/cp-geo.pdf




void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll mmin=(k*(1+k))/2;
    ll mmax=(k*(n+n-(k-1)))/2;

    if(x>=mmin and x<=mmax){
        cout<<"YES"<<endl;
        return;
    }else{
        cout<<"NO"<<endl;
        return;
    }
    
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