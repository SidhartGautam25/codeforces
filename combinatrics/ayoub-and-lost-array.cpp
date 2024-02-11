#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(vector<vector<ll>>&tree,ll f,ll node,unordered_map<ll,vector<pair<ll,ll>>>&mp,vector<bool>&vis,ll d){
    if(vis[node]){
        return;
    }
    vis[node]=true;
    if(tree[node].size()==1 and node != 1){
        mp[node].push_back(make_pair(f,d));
    }
    
    for(ll i=0;i<tree[node].size();i++){
        ll next=tree[node][i];
        dfs(tree,f,next,mp,vis,d+1);
    }
    
}

void goleaf(vector<vector<ll>>&tree,unordered_map<ll,vector<pair<ll,ll>>>&mp,ll curr,ll d,vector<bool>&ans,vector<bool>&vis){
    if(vis[curr]){
        return;
    }
    if(ans[0]){
        return;
    }
   
    vis[curr]=true;
    // for(auto it:mp){
    //     ll f=it.first;
    //     vector<pair<ll,ll>>t=it.second;
    //     for(ll i=0;i<t.size();i++){
    //         ll dis=t[i].second;
    //         if(dis<=d){
    //             return;
    //         }
    //     }
    // }
    //vector<pair<ll,ll>>vec=mp[curr];
    if(tree[curr].size()==1 and curr != 1){
         for(ll x=0;x<mp[curr].size();x++){
        ll dis=mp[curr][x].second;
        if(dis<=d){
            return;
        }
    }
      
        ans[0]=true;
       // cout<<"we reached "<<curr<<" and its dis from 1 is "<<d<<endl;
        return;
    
        
    }
   
    for(ll i=0;i<tree[curr].size();i++){
        ll next=tree[curr][i];
        goleaf(tree,mp,next,d+1,ans,vis);
    }
}



void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    unordered_map<ll,ll>mp;
    ll k1=l/3;
    ll x1=l%3;
    ll k2=r/3;
    ll x2=r%3;
    ll zer=0;

    mp[0]=x1==0?(k2-k1+1):(k2-k1);
    mp[1]=x1<=1?(x2>=1?(k2-k1+1):(k2-k1)):(x2>=1?(max(zer,k2-k1)):(max(zer,k2-k1-1)));
    mp[2]=x1<=2?(x2>=2?(k2-k1+1):(k2-k1)):(x2>=2?(max(zer,k2-k1)):(max(zer,k2-k1-1)));



    vector<vector<ll>>dp(n,vector<ll>(3));
    dp[0][0]=mp[0];
    dp[0][1]=mp[1];
    dp[0][2]=mp[2];
    for(ll i=1;i<n;i++){
        
            
                dp[i][0]=(((dp[i-1][0]%mod)*(mp[0]%mod))%mod+((dp[i-1][1]%mod)*(mp[2]%mod))%mod+((dp[i-1][2]%mod)*(mp[1])%mod)%mod)%mod;
          
                dp[i][1]=(((dp[i-1][0]%mod)*(mp[1]%mod))%mod+((dp[i-1][2]%mod)*(mp[2]%mod))%mod+((mp[0]%mod)*(dp[i-1][1]%mod)))%mod;

                dp[i][2]=((dp[i-1][0]*mp[2])%mod+(dp[i-1][1]*mp[1])%mod+(dp[i-1][2]*mp[0])%mod)%mod;
            
       

    }
    cout<<dp[n-1][0]<<endl;
  
  
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
