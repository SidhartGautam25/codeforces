#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        mp[1]++;
    }
    if(arr[i]==0){
        mp[0]++;
    }
   }
   long long ans=pow(2,mp[0])*mp[1];
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