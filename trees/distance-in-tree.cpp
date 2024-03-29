#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(vector<vector<ll>>&tree,ll curr,ll p,vector<vector<ll>>&dp,ll k){
    
    dp[curr][0]=1;
    for(ll i=0;i<tree[curr].size();i++){
        ll child=tree[curr][i];

        if(child != p){
            dfs(tree,child,curr,dp,k);
            for(ll i=1;i<=k;i++){
                dp[curr][i]=dp[curr][i]+dp[child][i-1];
            }
        }
    }
}

void ans_cal(vector<vector<ll>>&tree,ll curr,ll p,vector<vector<ll>>&dp,vector<vector<ll>>&dis,ll k){
    for(ll d=0;d<=k;d++){
        dis[curr][d]=dp[curr][d];
    }
    if(curr != 1){
        dis[curr][1]=dis[curr][1]+dis[p][0];
        for(ll d=2;d<=k;d++){
            dis[curr][d]=dis[curr][d]+dis[p][d-1];
            dis[curr][d]=dis[curr][d]-dp[curr][d-2];
        }
    }
    for(ll i=0;i<tree[curr].size();i++){
        ll child=tree[curr][i];
        if(child != p){
            ans_cal(tree,child,curr,dp,dis,k);
        }
    }
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>tree(n+1);
    for(ll i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,0));
    vector<vector<ll>>dis(n+1,vector<ll>(k+1,0));
    dfs(tree,1,1,dp,k);
    ll ans=0;
    ans_cal(tree,1,1,dp,dis,k);
    for(ll u=1;u<=n;u++){
        ans=ans+dis[u][k];
    }
    ans=ans/2;
    cout<<ans<<endl;

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