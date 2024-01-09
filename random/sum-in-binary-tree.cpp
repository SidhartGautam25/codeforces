#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  long long sum=0;
  while(n != 0){
    sum=sum+n;
    n=n/2;
  }
  cout<<sum<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}