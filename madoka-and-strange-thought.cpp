#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   long long ans=n+2*(n/2)+2*(n/3);
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