#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,l;
  cin>>n>>l;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>ans;

  for(int i=1;i<=l;i++){
    int zcount=0;
    int ocount=0;
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            zcount++;
        }else{
            ocount++;
        }
        arr[j]=arr[j]/2;
    }
    if(zcount>=ocount){
        ans.push_back(0);
    }else{
        ans.push_back(1);
    }
  }
  int temp=0;
  for(int i=0;i<ans.size();i++){
    int t=ans[i];
    temp=temp+t*pow(2,i);
  }
  cout<<temp<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}