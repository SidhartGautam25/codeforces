#include <bits/stdc++.h>
using namespace std;

void solve(){
   int l,r;
   cin>>l>>r;
   if(r<2*l){
    cout<<-1<<" "<<-1<<endl;
    return;
   }else{
    cout<<l<<" "<<2*l<<endl;
    return;
   }
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}