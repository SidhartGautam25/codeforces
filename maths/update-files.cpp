#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k;
    cin>>n>>k;
    ll hour=0;
    ll comp=1;
    while(comp<k){
        hour++;
        comp=comp*2;
    }
    ll rem=n-comp;
    ll remtime=(rem+k-1)/k;
    hour=hour+remtime;
    cout<<hour<<endl;
    return;

 
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