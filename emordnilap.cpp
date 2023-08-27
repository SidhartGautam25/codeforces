#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long n;
   cin>>n;
   long long m=1000000007;
   long long ans=((n%m)*((n-1)%m))%m;
   for(int i=2;i<=n;i++){
     ans=((ans%m)*(i%m))%m;
   }
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