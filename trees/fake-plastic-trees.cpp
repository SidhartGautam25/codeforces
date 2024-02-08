#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(vector<vector<int>>&arr,vector<int>&tree,vector<pair<int,int>>&dp,int node,vector<int>&count){
    int parent=tree[node];
    if((dp[parent].first>dp[node].second) and (node != 1)){
        count[0]=count[0]+1;
    }
    for(int i=0;i<arr[node].size();i++){
        dfs(arr,tree,dp,arr[node][i],count);
    }

}


void solve()
{
    int n;
    cin>>n;
    vector<int>tree(n+1,1);
    vector<vector<int>arr(n+1);
    for(int i=2;i<=n;i++){
        int p;
        cin>>p;
        tree[i]=p;
        arr[p].push_back(i);

    }
    vector<pair<int,int>>dp(n+1);
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        dp[i].first=a;
        dp[i].second=b;
    }
    vector<int>count(1,0);
    int node=1;
    dfs(arr,tree,dp,node,count);
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
