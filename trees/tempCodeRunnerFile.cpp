#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
bool comp(const pair<int,int>&a,const pair<int,int>&b){
    
    a.first<b.first;
}

void dfs(vector<vector<int>>&tree,int node,int&count,vector<bool>&vis){
    if(vis[node]){
        return;
    }
    vis[ind]=true;
    if(tree[node].size()==1){
        count++;
    }
    // cout<<"setting for ind "<<ind<<" and x is "<<x<<endl;
    // cout<<"size is "<<g[ind].size()<<endl;
    for(int i=0;i<tree[node].size();i++){
        //cout<<"now going to "<<g[ind][i]<<endl;
        dfs(tree,tree[node][i],count,vis);
    }

}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    ll count=0;
    vector<bool>vis(n+1,false);
    dfs(tree,1,count,vis);
    ll ans=(count+1)/2;
    cout<<ans<<endl;

   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}