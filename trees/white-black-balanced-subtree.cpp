#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


pair<int,int> dfs(vector<vector<int>>&tree,int node,string& s,unordered_map<int,pair<int,int>>&mp,vector<bool>&vis){
    if(vis[node]){
        return make_pair(0,0);
    }
    vis[node]=true;
    if(tree[node].size())
    
    
    for(int i=0;i<tree[node].size();i++){
        //cout<<"now going to "<<g[ind][i]<<endl;
        pair<int,int>p=dfs(tree,tree[node][i],s,mp,vis);
        mp[node].first=mp[node].first+p.first;
    }
    return mp[node];
}

void solve()
{
    int n;
    cin>>n;
    vector<int>tree(n+1);
    vector<vector<int>>arr(n+1);
    for(int i=1;i<=n;i++){
        if(i==1){
            tree[i]=i;
            continue;
        }
        cin>>tree[i];
        int a=i;
        int b=tree[i];
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    string s;
    cin>>s;
    vector<bool>vis(n+1,false);
    unordered_map<int,pair<int,int>>mp;
    int node=1;
    pair<int,int>p=dfs(arr,node,s,mp,vis);
    int count=0;
    for(auto it:mp){
        if(it.second.first==it.second.second){
            count++;    
        }
    }
    cout<<count<<endl;



  

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
