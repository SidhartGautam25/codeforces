#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void dfs(vector<vector<pair<ll,ll>>>&tree,ll node,vector<bool>&vis,vector<ll>&ans,bool two){
    if(vis[node]){
        return ;
    }
    vis[node]=true;
    if(tree[node].size()==3){
        ans[0]=-1;
        //cout<<"leave is "<<node<<endl;
        return ;
    }
    
    for(ll i=0;i<tree[node].size();i++){
        //cout<<"now going to "<<g[ind][i]<<endl;
        ll child=tree[node][i].first;
        ll edge=tree[node][i].second;
        if(ans[edge] != 0){
            continue;
        }else{
            if(two){
                ans[edge]=2;
                two=false;
                dfs(tree,child,vis,ans,two);
            }else{
                ans[edge]=3;
                two=true;
                dfs(tree,child,vis,ans,two);
            }
        }
    }
}

void solve()
{
    ll n;
    cin>>n;
    vector<vector<pair<ll,ll>>>tree(n+1);

    for(ll i=1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        tree[a].push_back({b,i});
        tree[b].push_back({a,i});
    }
    vector<ll>ans(n,0);
    vector<bool>vis(n+1,false);
    ll node=1;
    bool two=true;
    dfs(tree,node,vis,ans,two);
    if(ans[0]==-1){
        cout<<"-1"<<endl;
        return;
    }
    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<endl;
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