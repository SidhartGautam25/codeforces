#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,z;
   cin>>n>>z;
   vector<int>arr(n);
   int ans;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i==0){
        ans=arr[i] | z;
    }else{
        ans=max(ans,arr[i] | z);
    }
   }
   cout<<ans<<endl;
  
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}