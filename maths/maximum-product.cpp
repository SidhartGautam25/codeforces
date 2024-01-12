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
   ll ans2=arr[0]*arr[1]*arr[n-1]*arr[n-2]*arr[n-3];
   ll ans4=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
   ll ans5=arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
   ll ans=max(ans2,max(ans4,ans5));
   cout<<ans<<endl;
  
   
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}