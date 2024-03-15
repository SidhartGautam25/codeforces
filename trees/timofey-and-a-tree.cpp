#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool dfs(vector<vector<int>>&tree,vector<int>&col,int curr,int parent,int color){
    if(col[curr] != color){
        return false;
    }
    for(int i=0;i<tree[curr].size();i++){
        int child=tree[curr][i];
        if(child != parent){
            bool ans=dfs(tree,col,child,curr,color);
            if(ans==false){
                return false;
            }
        }
    }
    return true;

}


void solve(){
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    vector<pair<int,int>>edges(n-1);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        edges[i-1].first=u;
        edges[i-1].second=v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int>col(n+1);
    for(int i=1;i<=n;i++){
        cin>>col[i];
    }

    
    for(int i=0;i<n-1;i++){
        int u=edges[i].first;
        int v=edges[i].second;
        if(col[u]==col[v]){
            continue;
        }else{
            
            int curr=u;
            int parent=v;
            int color=col[root];
            bool ans=dfs(tree,col,root,parent,color);
            if(ans){
                cout<<"YES"<<endl;
                cout<<v<<endl;
                return;
            }
            curr=v;
            parent=u;
            color=col[root];
            ans=dfs(tree,col,root,parent,color);
            if(ans){
                cout<<"YES"<<endl;
                cout<<v<<endl;
                return;
            }
        }
    } 
    cout<<"NO"<<endl;
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