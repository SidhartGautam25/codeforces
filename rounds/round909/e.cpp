#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   unordered_map<int,int>mp;
   int smallest=INT_MAX;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    smallest=min(smallest,arr[i]);
    mp[arr[i]]=i;
   }
   int ind=mp[smallest];
   while(ind+1<n and arr[ind]<arr[ind+1]){
    ind++;
   }
   if(ind==n-1){
    cout<<ind<<endl;
    return;

   }else{
    cout<<-1<<endl;
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