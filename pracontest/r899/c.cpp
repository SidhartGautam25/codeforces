#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
  ll n;
  cin>>n;
  vector<ll>arr(n);
  for(ll i=0;i<n;i++){
        cin>>arr[i];
  }
  vector<ll>presum(n);
  ll s=0;
  for(ll i=n-1;i>=0;i--){
      presum[i]=s;
      if(arr[i]>0){
        s=s+arr[i];
      }
  }
//   for(ll i=0;i<n;i++){
//     cout<<presum[i]<<"  ";
//   }
//   cout<<endl;
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(i%2==0){
        ans=max(ans,arr[i]+presum[i]);
    }else{
        ans=max(ans,presum[i]);
    }
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