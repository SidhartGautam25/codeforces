#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

void dfs(int u,int p,vector<vector<int>>&dp,vector<int>& level,int log,vector<vector<int>>& tree){
    dp[u][0]=p;
    for(int i=1;i<=log;i++){
        dp[u][i]=dp[dp[u][i-1]][i-1];
    }
    for(int i=0;i<tree[u].size();i++){
        int c=tree[u][i];
        if(c != p){
            level[c]=level[u]+1;
            dfs(c,u,dp,level,log,tree);
        }
    }
}

int lca(int u,int v,int log,vector<int>&level,vector<vector<int>>&dp){
    if(level[u]<level[v]){
        int t=u;
        u=v;
        v=t;
    }

    for(int i=log;i>=0;i--){

        //until u and v are at same level,we will jump
        if(level[u]-level[v]>=pow(2,i)){
            u=dp[u][i];//jump size is 2^i;
        }
    }

    if(u==v){
        return u;
    }

    for(int i=log;i>=0;i--){
        if(dp[u][i] != dp[v][i]){
            //we will lift u and v until they have diffrent ansestor 
            //in this way we will reach to lca child
            u=dp[u][i];
            v=dp[v][i];
        }
    }
    // now we will return the parent of u or v because that will be our lca
    return dp[u][0];
}

void solve(){
    int n;//number of nodes;
    cin>>n;
    vector<vector<int>tree(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    int log=(int)ceil(log2(n));
    vector<vector<int>>dp(n+1,vector<int>(log+1,-1));
    vector<int>level(n+1,0);
    dfs(1,1,dp,level,log,tree);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<"lca of a and b is "<<lca(a,b)<<endl;
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