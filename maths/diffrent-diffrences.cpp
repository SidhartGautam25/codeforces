#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll k,n;
    cin>>k>>n;
    int d=1;
    vector<int>ans(k);
    ans[0]=1;
    for(int i=1;i<k;i++){
        int curr=ans[i-1]+d;
        if((curr+(k-i-1))<=n){
             ans[i]=curr;
             d++;
        }else{
            ans[i]=ans[i-1]+1;
        }
        
    }
    for(int i=0;i<k;i++){
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