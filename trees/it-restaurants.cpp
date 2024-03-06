#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX

int dfs(vector<vector<int>>&tree,int curr,vector<bool>&vis,map<int,int>&mp,int n){
    if(vis[curr]){
        return 0;
    }
    vis[curr]=true;
    if(tree[curr].size()==1 and curr != 1){
        return 1;
    }
    int count=0;
    for(int i=0;i<tree[curr].size();i++){
        int child=tree[curr][i];
        int c=dfs(tree,child,vis,mp);
        count=count+c;
    }
    int rem=n-1-count;
    if(rem != 0 and count != 0){
        mp[rem]=count;
        mp[count]=rem;
    }
    return count+1;

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
    map<int,int>mp;
    vector<bool>vis(n+1,false);
    int node=1;
    int ans=dfs(tree,node,vis,mp,n);
    cout<<mp.size()<<endl;
    for(auto it:mp){
        int f=it.first;
        int s=it.second;
        cout<<f<<" "<,s<<endl;
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