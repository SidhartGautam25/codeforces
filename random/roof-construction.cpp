#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   int msb=1;
   while(msb<n){
    msb=msb*2;
   }
   msb=msb/2;
   for(int i=n-1;i>=msb;i--){
    cout<<i<<" ";
   }
   for(int i=0;i<msb;i++){
    cout<<i<<" ";
   }
   cout<<endl;
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}