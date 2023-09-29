#include <bits/stdc++.h>
using namespace std;

void solve(){
   int x;
   cin>>x;
   int count=0;
   while(x>0){
    int rsb=x & -x;
    x=x-rsb;
    count++;
   }
   cout<<count<<endl;
}
int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}