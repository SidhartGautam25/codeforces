
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   vector<int>dp(n+1);
   dp[0]=-1;
   for(int i=1;i<n;i++){
      if(arr[i] != arr[i-1]){
         dp[i]=i-1;
      }else{
        dp[i]=dp[i-1];
      }
   }
   int q;
   cin>>q;
   for(int i=0;i<q;i++){
      int l,r;
      cin>>l>>r;
      l--;
      r--;
      if(dp[r]<l){
        cout<<"-1  -1"<<endl;
      }else{
        cout<<r+1<<"  "<<dp[r]+1<<endl;
      }
   }
 
   
   
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
