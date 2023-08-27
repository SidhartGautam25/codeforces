#include <bits/stdc++.h>
using namespace std;



void solve(){
  int n;
  cin>>n;
  vector<string>arr(n);
  unordered_map<char,int>mp;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    char c=arr[i][0];
    mp[c]++;
  }
  int ans=0;
  for(auto it:mp){
    int x=it.second;
    if(x>2){
        if(x==3){
            ans=ans+1;
        }
        else if(x%2==0){
            int t=x/2;
            ans=ans+t*(t-1);
        }else{
            int t=x/2;
            int u=t+1;
            ans=ans+((t*(t-1))/2)+((u*(u-1))/2);
        }
    }
  }
  cout<<ans<<endl;
}
int main() {
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}