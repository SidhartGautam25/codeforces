#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tt){
//    int n,k;
//    cin>>n>>k;
//    vector<int>arr(n);
//    map<int,int>mp;
//    for(int i=0;i<n;i++){
//      cin>>arr[i];
//      mp[arr[i]]++;
//    }
//    sort(arr.begin(),arr.end());
//    int made=0;
//    vector<bool>done(n,false);
//    int steps=0;
//    for(int i=0;i<n;i++){
//     if(done[i]){
//         continue;
//     }
//       for(int j=i+1;j<n;j++){
//          if((arr[j]-arr[i])%k==0){
//             if(done[j]){
//                 continue;
//             }else{
//                 // cout<<"i "<<i<<" j "<<j<<endl;
//                 steps=steps+(arr[j]-arr[i])/k;
//                 done[i]=true;
//                 done[j]=true;
//                 made=made+2;
//                 break;

//             }
//          }
//       }
//    }
//    int count=0;
//    for(int i=0;i<n;i++){
//      if(done[i]==false){
//         count++;
//      }
//      if(count>1){
//         cout<<"-1"<<endl;
//         return;
//      }
//    }
//    cout<<steps<<endl;
 

 int n,k;
 cin>>n>>k;
 vector<int>arr(n);
 map<int,int>mp;
 for(int i=0;i<n;i++){
    int t;
    cin>>t;
    t=t%k;
    if(t<0){
        t=t+k;
    }
    arr[i]=t;
    mp[t]++;
 }
 int odd=0;
 for(auto it:mp){
    int f=it.second;
    if(f%2==1){
        odd++;
    }
    
 }
 if(n%2==0){

 }else{

 }

}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        
    }
    return 0;
}