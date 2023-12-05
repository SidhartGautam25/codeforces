#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    string tr=t;
    reverse(tr.begin(),tr.end());
    ll count=0;
    ll countr=0;
    for(int i=0;i<n;i++){
        if(s[i] != t[i]){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i] != tr[i]){
            countr++;
        }
    }

    ll ans1,ans2;
    if(count%2==0){
        ans1=2*count;
    }else{
        ans1=2*count-1;
    }

    if(countr%2==0){
        ans2=2*countr-1;
    }else{
        ans2=2*countr;
    }
    ll ans=min(ans1,ans2);
    if(count==0){
        ans=0;
    }
    else if(s==tr){
        ans=2;
    }
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