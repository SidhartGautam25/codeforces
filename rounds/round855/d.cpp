#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<n-2;i++){
    if(s[i]==s[i+2]){
        count++;
    }
  }
  int ans=n-1-count;
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