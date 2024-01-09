#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  unordered_map<char,int>mp;
  int mmax=0;
  for(int i=0;i<s.size();i++){
      char c=s[i];
      mp[c]++;
      mmax=max(mmax,mp[c]);
  }
  if(mp.size()==1){
      cout<<-1<<endl;
      return;
  }else if(mp.size()==2){
      if(mmax==2){
        cout<<4<<endl;
        return;
      }
      cout<<6<<endl;
      return;
  }else if(mp.size()==3){
      cout<<4<<endl;
  }else{
      cout<<4<<endl;
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