#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int temp=b+c;
  if(a==temp+1){
    cout<<a+temp<<endl;
  }else if(a<temp+1){
    cout<<2*a-1<<endl;
  }else{
    cout<<2*temp+1<<endl;
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