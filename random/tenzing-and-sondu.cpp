#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,m;
  cin>>n>>m;
  long long first=0;
  long long second=0;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    first+=temp;
  }
  for(int i=0;i<m;i++){
    int temp;
    cin>>temp;
    second+=temp;
  }
  if(first==second){
    cout<<"Draw"<<endl;
  }else if(first>second){
    cout<<"Tsondu"<<endl;
  }else{
    cout<<"Tenzing"<<endl;
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