#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll ans;
    if(n==1){

    }
    if(b>=0){
        ans=a*n+b*n;
    }else{
        ll comp=0;
        int i=1;
        while(i<n){
            if(s[i] != s[i-1]){
                comp++;
            }
            i++;
        }
        comp++;
        ll steps=comp/2+1;
        ans=a*n+b*steps;
    }
    cout<<ans<<endl;
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