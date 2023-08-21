#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  long long oddsum=0;
  long long evensum=0;
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    if(temp%2==0){
        evensum=evensum+temp;
    }else{
        oddsum=oddsum+temp;
    }
  }
  if(evensum>oddsum){
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