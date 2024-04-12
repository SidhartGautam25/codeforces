#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007 

void dfs(vector<vector<ll>>&tree,ll v,ll p,vector<ll>&color,vector<vector<ll>>&dp){
    if(color[v]==1){
        dp[v][0]=0;
        dp[v][1]=1;
    }else{
        dp[v][0]=1;
        dp[v][1]=0;

    }
    for(ll i=0;i<tree[v].size();i++){
        ll child=tree[v][i];
        if(child != p){
            vector<ll>mytree(2);
            mytree[0]=dp[v][0];
            mytree[1]=dp[v][1];
            dp[v][0]=0;
            dp[v][1]=0;
            dfs(tree,child,v,color,dp);

            // if current child subtree is added to our current subset
            dp[v][0]+= mytree[0]*dp[child][0] ;
            dp[v][0]=dp[v][0]%mod;
            dp[v][1]+=mytree[0]*dp[child][1];
            dp[v][1]=dp[v][1]%mod;
            dp[v][1]+=mytree[1]*dp[child][0];
            dp[v][1]=dp[v][1]%mod;

            //if current child suvtree is not added to cur current subset
            dp[v][0]+=mytree[0]*dp[child][1];
            dp[v][0]=dp[v][0]%mod;
            dp[v][1]+=mytree[1]*dp[child][1];
            dp[v][1]=dp[v][1]%mod;
           
        }
    }
}


void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>>tree(n);
    for(ll i=1;i<n;i++){
        ll a;
        cin>>a;
        tree[i].push_back(a);
        tree[a].push_back(i);


    }
    vector<ll>color(n);
    for(ll i=0;i<n;i++){
        cin>>color[i];
    }
    vector<vector<ll>>dp(n,vector<ll>(2,0));
    dfs(tree,1,1,color,dp);
    // cout<<"------------------"<<endl;
    // for(ll i=0;i<dp.size();i++){
    //     for(ll j=0;j<dp[i].size();j++){
    //         cout<<dp[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"------------------"<<endl;
    cout<<dp[1][1]<<endl;

    
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