#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353


void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll lcount=0;
    char c=s[0];
    ll i=0;
    while(i<n and s[i]==c){
        i++;
        lcount++;
    }
    c=s[n-1];
    ll rcount=0;
    i=n-1;
    while(i>=0 and s[i]==c){
        i--;
        rcount++;
    }
    
    ll ans;
    if(s[0]==s[n-1]){
        ans=(((lcount+1)%mod)*((rcount+1)%mod))%mod;


    }else{
        ans=(lcount+rcount+1)%mod;

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