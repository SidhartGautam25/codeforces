#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
  
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int l=arr[0];
   int r=arr[n-1];
   int i=1;
   int countl=1;
   int countr=1;
   while(i<n and arr[i]==arr[0]){
    i++;
    countl++;
   }
   if(countl==n){
    cout<<"0"<<endl;
    return;
   }
   i=n-2;
   while(i>=0 and arr[i]==arr[n-1]){
     i--;
     countr++;
   }
   int ans=max(countl,countr);
   ans=n-ans;
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