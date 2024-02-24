#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007


void dfs(vector<vector<int>>& tree,int curr,vector<bool>& vis,vector<int>&count,vector<int>&arr,int cat,int p,int m){
    if(vis[curr]==true){
        return;
    }
   // cout<<"we are at node "<<curr<<endl;
    vis[curr]=true;
    if(arr[curr]==1){
        if(arr[p]==1){
            cat++;
        }else{
            cat=1;
        }
    }else{
        cat=0;
    }
    //cout<<"at node "<<curr<<" cat count is "<<cat<<endl;
    if(cat>m){
        return;
    }
    if(tree[curr].size()==1 and curr != 1){
        count[0]=count[0]+1;
        return;
    }
    for(int i=0;i<tree[curr].size();i++){
        p=curr;
        int c=tree[curr][i];
        dfs(tree,c,vis,count,arr,cat,p,m);
    }
    
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    // //cout<<"tree is "<<endl;
    // for(int i=1;i<tree.size();i++){
    //     int nnode=i;
    //   // cout<<"nodes connected to nnode  "<<nnode<<" are "<<endl;
    //     for(int j=0;j<tree[nnode].size();j++){
    //         cout<<tree[nnode][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<bool>vis(n+1,false);
    vector<int>count(1,0);
    int node=1;
    int cats=0;
    int p=1;
    dfs(tree,node,vis,count,arr,cats,p,m);
    cout<<count[0]<<endl;

    
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