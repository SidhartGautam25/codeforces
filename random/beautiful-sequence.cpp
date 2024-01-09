#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  bool cond=false;
  //vector<int>arr(n);
  for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    //arr[i]=temp;
    if(temp<=i+1){
        cond=true;
        
    }
    
  }
  if(cond==true){
    cout<<"YES"<<endl;
    return;
  }
   cout<<"NO"<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}