#include <bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  c=c-a;
  d=d-b;
  if(d<0){
    cout<<-1<<endl;
    return;
  }
  else if(c>d){
    cout<<-1<<endl;
    return;
  }else{
    int ans=d+(d-c);
    cout<<ans<<endl;
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