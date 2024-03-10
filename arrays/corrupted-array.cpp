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
  int n;
  cin>>n;
  vector<int>arr(n+2);
  vector<int>sum(n+3,0);
  int s=0;
  map<int,int>mp;
  for(int i=0;i<n+2;i++){
    int x;
    cin>>x;
    s=s+x;
    sum[i+1]=s;
    arr[i]=x;
    mp[x]++;
  }
  int f;
  int fi;
  int s;
  int si;
  if(arr[0]>=arr[1]){
    f=arr[0];
    fi=0;
    s=arr[1];
    si=1;
  }else{
    f=arr[1];
    fi=1;
    s=arr[0];
    si=0;
  }
  for(int i=1;i<arr.size();i++){
    if(arr[i]>=f){
        int t=f;
        f=arr[i];
        s=t;
    }
  }
  for(int i=0;i<arr.size();i++){
    int t=s-arr[i];
    if(2*f==t){

    }
  }
    
  
   
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