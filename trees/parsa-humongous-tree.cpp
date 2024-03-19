
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void dfs(vector<vector<ll>>&tree,vector<pair<ll,ll>>&range,vector<vector<ll>>&dp,ll curr,ll p){
    dp[curr][0]=0;
    dp[curr][1]=0;
    for(ll i=0;i<tree[curr].size();i++){
        ll child=tree[curr][i];
        if(child != p){
            dfs(tree,range,dp,child,curr);
            ll a=dp[child][0]+abs(range[child].first-range[curr].first);
            ll b=dp[child][1]+abs(range[child].second-range[curr].first);
            ll c=dp[child][0]+abs(range[child].first-range[curr].second);
            ll d=dp[child][1]+abs(range[child].second-range[curr].second);
            dp[curr][0]=dp[curr][0]+max(a,b);
            dp[curr][1]=dp[curr][1]+max(c,d);
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>range(n+1);
    vector<vector<ll>>tree(n+1);
    for(ll i=1;i<=n;i++){
        ll l,r;
        cin>>l>>r;
        range[i].first=l;
        range[i].second=r;
    }
    for(ll i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<vector<ll>>dp(n+1,vector<ll>(2));
    ll curr=1;
    ll parent=1;
    dfs(tree,range,dp,curr,parent);
    ll ans=max(dp[1][0],dp[1][1]);
    cout<<ans<<endl;
   
     
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