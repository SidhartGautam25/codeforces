#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve(){
   int n;
   cin>>n;
   long long ans=1;
   if(n%2==1){
    cout<<0<<endl;
    return;
   }
   for (int i = 1; i <= n / 2; ++i) {
        ans *= i * i % MOD;
        ans %= MOD;
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}