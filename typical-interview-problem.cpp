#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
  string str="FBFFBFFBFBFFBFFBFB";
  string input;
  cin>>input;
  size_t output=str.find(input);
  if(output != string::npos){
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