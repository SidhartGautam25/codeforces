#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k1,k2;
  cin>>n>>k1>>k2;
  int f=0;
  int s=0;
  for(int i=0;i<k1;i++){
    int temp;
    cin>>temp;
    f=max(f,temp);
  }

  for(int i=0;i<k2;i++){
    int temp;
    cin>>temp;
    s=max(s,temp);
  }

  if(f>s){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
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