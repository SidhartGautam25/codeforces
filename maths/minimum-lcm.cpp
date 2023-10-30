#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    ll a=1,b;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;
            break;
        }
    }
    b=n-a;
    cout<<a<<" "<<b<<endl;
 
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