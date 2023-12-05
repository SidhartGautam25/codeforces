#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int last=0;
    ll ans=0;
    for(int i=0;i<n-3;i++){
        if(s[i]=='b' and s[i+1]=='e' and s[i+2]=='a' and s[i+3]=='r'){
            ans=ans+(i-last+1)*(n-(i+3));
            last=i+1;
        }
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