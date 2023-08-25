#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long n;
   cin>>n;
   double temp=2*n+0.25;
   double x=sqrt(temp)+0.25;
   long long ans=ceil(x);
   cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}