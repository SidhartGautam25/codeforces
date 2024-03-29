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
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    if(n%2==1){
        cout<<"-1"<<endl;
        return;
    }
    vector<int>dp(n+1);
    vector<bool>vis(n+1,false);
    int node=1;
    int count=0;
    int c=dfs(tree,node,vis,dp,count);
    if(count==0){
        cout<<"-1"<<endl;
        return;
    }
    cout<<count-1<<endl;
    return;
   
    }
    


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}