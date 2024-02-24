#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

void dfs(vector<vector<int>>&tree,vector<int>&col,int curr,map<int,bool>&mc,map<int,int>&dp,map<int,int>&dp2,vector<bool>&vis){
    if(vis[curr]){
        return;
    }
    vis[curr]=true;
    int clr=col[curr];
    //cout<<"color of "<<curr<<" is "<<clr<<endl;
    bool first=false;
    if(mc.find(clr) != mc.end()){
        if(mc[clr]==true){
            dp2[clr]++;

        }else{
            mc[clr]=true;
            first=true;
            dp[clr]++;
        }
    }else{
        mc[clr]=true;
        first=true;
        dp[clr]++;
    }
    for(int i=0;i<tree[curr].size();i++){
        int next=tree[curr][i];
        dfs(tree,col,next,mc,dp,dp2,vis);
    }
    if(first){
        mc[clr]=false;
    }
}

void solve(){
    int n;
    cin>>n;
    vector<int>col(n+1,0);
    for(int i=1;i<=n;i++){
        int c;
        cin>>c;
        col[i]=c;
    }
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    //cout<<"all done "<<endl;
    map<int,bool>mc;
    map<int,int>dp;
    map<int,int>dp2;
    vector<bool>vis(n+1,false);
    int node=1;
    //cout<<"started"<<endl;
    dfs(tree,col,node,mc,dp,dp2,vis);
    //cout<<"end"<<endl;
    ll ans=0;
    for(auto it:dp){
        int c=it.first;
        int diff=it.second;
       // cout<<"c is "<<c<<" diff is "<<diff<<endl;
        ans=ans+(diff*(diff-1))/2;
        ans=ans+dp2[c];

    }
    cout<<ans<<endl;
    
    

   
 
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