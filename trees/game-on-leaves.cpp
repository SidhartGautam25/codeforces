#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int dfs(vector<vector<int>>&tree,vector<bool>&vis,int node){
    if(vis[node]){
        return 0;
    }
    vis[node]=true;
    if(tree[node].size()==1){
       // cout<<"this is node "<<node<<endl;
        return 1;
    }
    int count=0;
    for(int i=0;i<tree[node].size();i++){
        //cout<<"now callling for node "<<tree[node][i]<<endl;
        count=count+dfs(tree,vis,tree[node][i]);
        //cout<<"and count is "<<count<<endl;
    }
    return count+1;
 
}


void solve()
{
    int n,x;
    cin>>n>>x;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    if(n==1 or tree[x].size()==1){
        cout<<"Ayush"<<endl;
        return;
    }
    vector<bool>vis(n+1,false);
    int node=x;
    int even=0;
    int total=0;
    //cout<<"tree node size is "<<tree[node].size()<<endl;
    vis[node]=true;
    for(int i=0;i<tree[node].size();i++){
        //cout<<"calling for node "<<tree[node][i]<<endl;
        int count=dfs(tree,vis,tree[node][i]);
        //cout<<"count is "<<count<<endl;
       total=total+count;
    }
    if(total%2==0){
        cout<<"Ashish"<<endl;
        return;
    }
    cout<<"Ayush"<<endl;


 

   

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
