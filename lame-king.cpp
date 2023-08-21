#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b;
   cin>>a>>b;
   if(abs(a)==abs(b)){
       cout<<2*abs(a)<<endl;
   }else{
       cout<<2*max(abs(a),abs(b))-1<<endl;
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