#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


ll dfs(vector<vector<ll>>&tree,ll node,vector<bool>&vis,unordered_map<ll,ll>&mp){
    if(vis[node]){
        return 0;
    }
    vis[node]=true;
    if(tree[node].size()==1 and node != 1){
        mp[node]=1;
        //cout<<"leave is "<<node<<endl;
        return 1;
    }
    // cout<<"setting for ind "<<ind<<" and x is "<<x<<endl;
    // cout<<"size is "<<g[ind].size()<<endl;
    ll leaves=0;
    for(ll i=0;i<tree[node].size();i++){
        //cout<<"now going to "<<g[ind][i]<<endl;
        leaves=leaves+dfs(tree,tree[node][i],vis,mp);
    }
    mp[node]=leaves;
    return leaves;

}

void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>>tree(n+1);

    for(ll i=1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    ll q;
    cin>>q;
    vector<pair<ll,ll>>arr(q);

    for(ll i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        arr[i].first=a;
        arr[i].second=b;
    }

    vector<bool>vis(n+1,false);
    unordered_map<ll,ll>mp;
    ll leaves=dfs(tree,1,vis,mp);
    // for(auto it:mp){
    //     cout<<"node is "<<it.first<<" and val is "<<it.second<<endl;
    // }
    //cout<<"query started and q= "<<q<<endl;
    for(ll i=0;i<q;i++){
        ll first=mp[arr[i].first];
        ll sec=mp[arr[i].second];
        ll ans=first*sec;
        cout<<ans<<endl;
    }
    
   

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