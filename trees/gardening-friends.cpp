#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

pair<ll,ll> bfs(vector<vector<ll>>tree,ll node,vector<ll>&dis){
    ll n=tree.size();
    vector<bool>vis(n+1);
    queue<pair<ll,ll>>q;
    q.push({node,0});
    vis[node]=true;
    pair<ll,ll>ans;
    ans.first=node;
    ans.second=0;
    dis[node]=0;
    while(q.size()>0){
        ll curr=q.front().first;
        ll level=q.front().second;
        q.pop();
        for(ll i=0;i<tree[curr].size();i++){
            if(vis[tree[curr][i]]==false){
                vis[tree[curr][i]]=true;
                q.push({tree[curr][i],level+1});
                dis[tree[curr][i]]=level+1;
                ans.first=tree[curr][i];
                ans.second=level+1;
            }
        }
    }
    return ans;
}

ll dfs(vector<vector<ll>>&tree,ll des,ll curr,vector<bool>&vis,ll dis){
    if(vis[curr]){
        return 0;
    }
    vis[curr]=true;
    if(curr==des){
        return dis;
    }
    ll ans=0;
    for(ll i=0;i<tree[curr].size();i++){
        ll next=tree[curr][i];
        ll temp=dfs(tree,des,next,vis,dis+1);
        ans=max(ans,temp);

        
    }
    return ans;
}




void solve()
{
    ll n,len,cost;
    cin>>n>>len>>cost;
    vector<vector<ll>>tree(n+1);
    for(ll i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);

    }
    
    // pair<ll,ll>p1=bfs(tree,1);
    // pair<ll,ll>p2=bfs(tree,p1.first);
    // ll poll1=p1.first;
    // ll poll2=p2.first;
    // vector<bool>vis1(n+1,false);
    // vector<bool>vis2(n+1,false);
    // ll dis=0;
    // ll dis1=dfs(tree,poll1,1,vis1,dis);
    // ll dis2=dfs(tree,poll2,1,vis2,dis);
    // ll ans1=len*p2.second-cost*min(dis1,dis2);
    // ll ans2=dis1*len;
    // ll ans=max(ans1,ans2);
    // cout<<ans<<endl;
    vector<bool>visone(n+1,false);
    vector<bool>visx(n+1,false);
    vector<ll>dis1(n+1,0);
    vector<ll>disx(n+1,0);
    pair<ll,ll>p1=bfs(tree,1,dis1);
    pair<ll,ll>p2=bfs(tree,p1.first,disx);
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll temp=(len*disx[i]-cost*dis1[i]);
        ans=max(ans,temp);
    }
    cout<<ans<<endl;

    
   
  

 

   

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
