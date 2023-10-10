#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans=(arr[0]*arr[n-1]);
    vector<ll>factors;
    for(ll i=2;i*i<=ans;i++){
        if(ans%i==0){
            // cout<<"pussing i= "<<i<<endl;
            factors.push_back(i);
            ll others=ans/i;
            //cout<<"f= "<<i<<" ";
            if(i != others){
                //cout<<"f= "<<n/i<<" ";
                // cout<<"pussing others= "<<others<<endl;
                factors.push_back(others);
            }
        }
    }
    // cout<<"ans = "<<ans<<endl;
    // cout<<"factors are "<<endl;
    // for(int i=0;i<factors.size();i++){
    //     cout<<factors[i]<<" ";
    // }
    // cout<<endl;
    if(arr.size()==factors.size()){
        sort(factors.begin(),factors.end());
         for(ll i=0;i<arr.size();i++){
            if(arr[i] != factors[i]){
                ans=-1;
                break;
            }
         }
         cout<<ans<<endl;
         return;
    }else{
        ans=-1;
        cout<<ans<<endl;
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