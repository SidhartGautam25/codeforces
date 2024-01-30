#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(vector<pair<int,int>>&tree,int node,int count,vector<int>&ans,string& s){
    if(tree[node].first==0 and tree[node].second==0){
        ans[0]=min(ans[0],count);
        return;
    }
    if(tree[node].first != 0){
        if(s[node-1] != 'L'){
            dfs(tree,tree[node].first,count+1,ans,s);
        }else{
            dfs(tree,tree[node].first,count,ans,s);
        }
    }
    if(tree[node].second != 0){
        if(s[node-1] != 'R'){
            dfs(tree,tree[node].second,count+1,ans,s);
        }else{
            dfs(tree,tree[node].second,count,ans,s);
        }
    }
}

void solve()
{
    
    int n,m;
    cin>>n>>m;
    vector<vector<int>>tree(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    vector<int>odd;
    vector<int>even;
    int level=1;
    vector<bool>vis(n+1,false);

    queue<pair<int,int>>q;
    q.push({1,level});
    vis[1]=true;
    while(q.size()>0){
        int node=q.front().first;
        int l=q.front().second;
        q.pop();
        if(l%2==0){
            even.push_back(node);
        }else{
            odd.push_back(node);
        }
        for(int i=0;i<tree[i].size();i++){
            if(vis[tree[node][i]]==false){
                vis[tree[node][i]]=true;
                q.push({tree[node][i],l+1});
            }
        }

        
    }
    if(odd.size()<even.size()){
        cout<<odd.size()<<endl;
        for(int i=0;i<odd.size();i++){
            cout<<odd[i]<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<even.size()<<endl;
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<endl;
    }
    cout<<endl;
    return;


   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
