#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  vector<int>arr(n);
  ordered_map<int,int>mp;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  sort(arr.begin(),arr.end());
  int localmax=0;
  int count=0;
  for(auto it:mp){
    int num=it.first;
    int f=it.second;
    if(mp.find(num-1) ==mp.end()){
      count=count+localmax;
      localmax=f;
    }else{
        localmax=max(localmax,f);
    }

  }
  count=count+localmax;
  cout<<count<<endl;





}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}