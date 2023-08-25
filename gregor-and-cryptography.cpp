#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   if(n==5){
    cout<<2<<" "<<4<<endl;
    return;
   }
   cout<<2<<" "<<(n-1)/2<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}