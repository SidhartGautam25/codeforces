#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,k;
  cin>>n>>k;
  long long q=n/k;
  long long f=q&1;
  if(f==0){
    cout<<"NO"<<endl;
    return;
  }else{
    cout<<"YES"<<endl;
  }
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}