#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,x,t;
  long long zero=0;
  cin>>n>>x>>t;
  long long ans=max(zero,n-t/x)*min(n,t/x)+(min(t/x-1,n-1)*(min(t/x,n)))/2;
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