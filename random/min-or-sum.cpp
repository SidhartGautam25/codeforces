#include <bits/stdc++.h>
using namespace std;

void solve(){
   double n;
   cin>>n;
   vector<int>arr(n);
   int ans;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i==0){
        ans=arr[i];
    }else{
        ans=ans | arr[i];
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