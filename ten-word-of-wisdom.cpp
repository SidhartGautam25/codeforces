#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int ind=0;
  int p_b=0;

  for(int i=1;i<=n;i++){
    int a,b;
    cin>>a>>b;
    if(a<=10 and b>p_b){
        p_b=b;
        ind=i;
    }
  }
  cout<<ind<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}