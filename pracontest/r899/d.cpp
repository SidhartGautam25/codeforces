#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


int dfs(vector<vector<int>>&tree,int node,int p,vector<int>&subtree_size,vector<int>&val,int& cost){
    subtree_size[node]=1;
    for(int i=0;i<tree[node].size();i++){
        int child=tree[node][i];
        if(child != p){
            int s=dfs(tree,child,node);
            subtree_size[node]=subtree_size[node]+s;
        }
    }
    int size=subtree_size[node];
    if(node != 1){
        cost=cost+size*(val[p]^val[node]);
    }
    return subtree_size[node];

}

void COST_DFS(vector<vector<int>>&tree,int node,int p,vector<int>&subtree_size,vector<int>&val,vector<int>&dp){

    if(node != 1){
        int t=val[node]^val[p];
        dp[node]=dp[p]-(subtree_size[p]+subtree_size[node])*t;

    }
    
    for(int i=0;i<tree[node].size();i++){
        int child=tree[node][i];
        if(child != p){
            COST_DFS(tree,child,node,subtree_size,val,dp);
        }
    }
}


void solve(){
    int n;
    cin>>n;
    vector<int>vals(n+1);
    for(int i=1;i<=n;i++){
        cin>>vals[i];
    }
    vector<vector<int>>tree(n+1);
    vector<vector<int>>subtree_size(n+1);
    int cost=0;
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<int>dp(n+1);
    dfs(tree,1,1,subtree_size,cost);
    dp[1]=cost;
    COST_DFS(tree,1,1,subtree_size,val,dp);
    for(int i=1;i<=n;i++){
        cout<<dp[i]<<"  ";
    }
    cout<endl;
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