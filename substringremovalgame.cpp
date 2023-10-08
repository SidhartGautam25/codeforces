#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  int n=s.size();
  vector<int>arr;
  int count=0;
  for(int i=0;i<n;i++){
    char c=s[i];
    if(c=='1'){
        count++;
    }else{
        if(count>0){
                //cout<<"i "<<i<<" count "<<count<<endl;
                arr.push_back(count);
                count=0;
        }
        
    }

  }
  if(count>0){
    arr.push_back(count);
  }
  sort(arr.begin(),arr.end());
  reverse(arr.begin(),arr.end());
  long long ans=0;
  for(int i=0;i<arr.size();i=i+2){
    ans=ans+arr[i];
  }
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