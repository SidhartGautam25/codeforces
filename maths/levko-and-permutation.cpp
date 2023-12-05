#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>ans(n);
    if(n==k){
        cout<<"-1"<<endl;
        return;
    }
    if(k==(n-1)){
        for(int i=0;i<n;i++){
            ans[i]=i+1;
        }

    }else{
        ans[0]=k+2;
        ans[n-1]=1;
        for(int i=1;i<=k;i++){
            ans[i]=i+1;
        }
        for(int i=k+1;i<n-1;i++){
            ans[i]=i+2;
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 
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