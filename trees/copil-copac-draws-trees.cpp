#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void dfs(vector<vector<pair<int,int>>>tree,int node,vector<int>&ans,int prev,int count,vector<bool>&vis){
    if(vis[node]==true){
        return;
    }
    vis[node]=true;
    if(tree[node].size()==1){
        return;
    }
    for(int i=0;i<tree[node].size();i++){
        int next=tree[node][i].first;
        int w=tree[node][i].second;
        if(w<prev){
            ans[0]=max(ans[0],count+1);
            dfs(tree,next,ans,w,count+1,vis);
        }else if(w>prev){
            dfs(tree,next,ans,w,count,vis);
        }

    }

}

void solve()
{
    
    int n;
    vector<vector<pair<int,int>>>tree(n+1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back({b,i});
        tree[b].push_back({a,i});
    }
    vector<int>ans[1];
    int prev=0;
    int count=1;
    int node=1;
    vector<bool>vis(n+1,false);
    dfs(tree,node,ans,prev,count,vis);
    cout<<ans[0]<<endl;

   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
