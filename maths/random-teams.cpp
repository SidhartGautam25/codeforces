#include <bits/stdc++.h>
using namespace std;

#define ll long long



void solve(){
    ll n,m;
    cin>>n>>m;
    ll a=n/m;
    ll b=n%m;
    ll max=(n-m)*(n-m+1)/2;
    ll first=(a*(a+1)*b)/2;
    ll sec=((a*(a-1))/2)*(m-b);
    ll min=first+sec;
    cout<<min<<" "<<max<<endl;
 
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