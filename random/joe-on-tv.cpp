#include <bits/stdc++.h>
using namespace std;

void solve(){
   double n;
   cin>>n;
   long long x=n;
   double ans=0;
   while(x>=1){
    ans=ans+1.00000000/n;
    n=n-1;
    x--;

   }
   cout<<ans<<endl;


}
int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}