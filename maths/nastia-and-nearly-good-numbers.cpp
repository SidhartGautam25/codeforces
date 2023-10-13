#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll a,b;
    cin>>a>>b;
    if(b==1){
        cout<<"NO"<<endl;
        return;
    }else{
        ll x=a;
        ll y=a*b;
        ll z=a*(b+1);
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
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