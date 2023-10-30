#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    vector<ll>ans(n,0);
    ans[0]=k*b;
    ll rem=s-k*b;
    if(rem<0){
        cout<<"-1"<<endl;
        return;
    }
    int i=0;
    while(rem>0 and i<n){
        if(rem>=(k-1)){
            ans[i]=ans[i]+(k-1);
            rem=rem-(k-1);
        }else{
            ans[i]=ans[i]+rem;
            rem=0;
        }
        i++;
    }
    if(rem >0){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 
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