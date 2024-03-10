#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX
 
ll dfs(vector<vector<ll>>& tree,ll curr,vector<bool>&vis,vector<ll>&dp,ll& count){
    if(vis[curr]){
        return 0;
    }
    if(tree[curr].size()==1 and curr != 1){
        dp[curr]=1;
        return 1;
    }
    vis[curr]=true;
    ll c=0;
    for(ll i=0;i<tree[curr].size();i++){
        c=c+dfs(tree,tree[curr][i],vis,dp,count);
    }
   c=c+1;
   if(c %2==0){
       count=count+1;
   }
    return c;
}
 
void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    vector<vector<ll>>dp(n,vector<ll>(2,0));
    if(s[0]=='1'){
        dp[0][1]=1;
    }else if(s[0]=='0'){
        dp[0][0]=1;
    }else{
        dp[0][0]=1;
        dp[0][1]=1;
    }
    for(ll i=1;i<n;i++){
        if(s[i]=='1'){
            dp[i][1]=dp[i-1][0]+1;
            dp[i][0]=0;
        }else if(s[i]=='0'){
            dp[i][0]=dp[i-1][1]+1;
            dp[i][1]=0;
        }else{
            dp[i][0]=dp[i-1][1]+1;
            dp[i][1]=dp[i-1][0]+1;
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans=ans+max(dp[i][0],dp[i][1]);
    }
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