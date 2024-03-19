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
    int ind=0;
    for(ll i=2;i*i<=ans;i++){
        if(ans%i==0){
           factors.push_back(i);
           if(i != (ans/i)){
               factors.push_back(ans/i);
           }
           
        }
    }
   
   sort(factors.begin(),factors.end());
   if(factors==arr){
       cout<<ans<<endl;
       return;
   }
   cout<<"-1"<<endl;
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