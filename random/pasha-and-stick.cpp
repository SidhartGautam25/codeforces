#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   if(n%2==1){
    cout<<0<<endl;
    return;
   }else if(n%4==0){
    cout<<n/4-1<<endl;
    return;
   }else{
    cout<<n/4<<endl;
    return;
   }

}
int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}