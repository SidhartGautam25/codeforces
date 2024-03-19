
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
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int ans=0;
   for(int k=1;k<=n;k++){
      if(n%k==0){
        int g=0;
        for(int i=0;i<n-k;i++){
            g=__gcd(g,abs(arr[i+k]-arr[i]));
        }
       
        if(g != 1){
            ans++;
        }
      }
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