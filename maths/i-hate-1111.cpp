#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

int dfs(vector<vector<int>>& tree,int curr,vector<bool>&vis,vector<int>&dp,int& count){
    if(vis[curr]){
        return 0;
    }
    if(tree[curr].size()==1 and curr != 1){
        dp[curr]=1;
        return 1;
    }
    vis[curr]=true;
    int c=0;
    for(int i=0;i<tree[curr].size();i++){
        c=c+dfs(tree,tree[curr][i],vis,dp,count);
    }
   c=c+1;
   if(c %2==0){
       count=count+1;
   }
    return c;
}

void solve(){
  ll x;
  cin>>x;
  if(x>(111*11-111-11)){
    cout<<"YES"<<endl;
    return;
  }
  int i=0;
  while(i<=100){
    int j=0;
    while(11*i+111*j<=x){
        if(11*i+111*j==x){
            cout<<"YES"<<endl;
            return;
        }
        j++;
    }
    i++;
  }
  cout<<"NO"<<endl;
  return;
   
    
  
   
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}