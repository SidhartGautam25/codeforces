#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

int dfs(vector<vector<int>>&tree,vector<int>&arr,vector<bool>&vis,int node,int level){
    if(vis[node]){
        return 0;
    }
    vis[node]=true;
    if(tree[node].size()==1 and node != 1){
        //cout<<"node is "<<node<<" and level is "<<level;
        arr.push_back(level);
        return 1;
    }
    int sub=0;
    for(int i=0;i<tree[node].size();i++){
        sub=sub+dfs(tree,arr,vis,tree[node][i],level+1);
    }
    int total=(sub*(-1))+(level);
    //cout<<"node is "<<node<<" and total is "<<total<<" level is "<<level<<endl;
    arr.push_back(total);
    return sub+1;
}


void solve()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    vector<int>arr;
    int level=0;
    vector<bool>vis(n+1,false);
    int node=1;
    int temp=dfs(tree,arr,vis,node,level);
    sort(arr.begin(),arr.end());
    int count=0;
    int i=arr.size()-1;
    ll ans=0;
    while(count<k){
        ans=ans+arr[i];
        i--;
        count++;

    }
    cout<<ans<<endl;

 

   

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
