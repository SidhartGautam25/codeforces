#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>pos;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>(n-k)){
            sum=sum+arr[i];
            pos.push_back(i);
        }
    }
    ll ans=1;
    for(int i=1;i<pos.size();i++){
        int t=pos[i]-pos[i-1];
        ans=((ans%mod)*(t%mod))%mod;
    }
    cout<<sum<<" "<<ans<<endl;

 
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