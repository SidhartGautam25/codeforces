#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  int x=0;
  bool cond=false;
  for(x=0;x<n;x++){
    long long total=(x*(x-1))/2+((n-x)*(n-x-1))/2;
    if(total==k){
        cond=true;
        break;
    }
  }
  if(cond==true){
    cout<<"YES"<<endl;
    for(int i=1;i<=x;i++){
       cout<<1<<" ";
    }
    for(int i=1;i<=n-x;i++){
        cout<<-1<<" ";
    }
    cout<<endl;
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