#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n,k;
  cin>>n>>k;
  if(n%2==0){
    if(n%4==0){
       int first=n/4;
       int second=n/2;
       cout<<first<<" "<<first<<" "<<second<<endl;
    }else{
      int first=2;
      int sec=n/2-1;
      cout<<first<<" "<<sec<<" "<<sec<<endl;
    }
  }else{
    long long first=(n-1)/2;
    cout<<"1 "<<first<<" "<<first<<endl;
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