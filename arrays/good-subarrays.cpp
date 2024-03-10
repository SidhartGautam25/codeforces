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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        string t=s.substr(i,1);
        arr[i]=stoi(t);
    }
   // cout<<"ddd"<<endl;
    ll sum=0;
    ll ans=0;
    vector<ll>psum(n+1,0);
    for(ll i=0;i<n;i++){
        sum=sum+arr[i];
        psum[i+1]=sum;
    }
    map<ll,ll>mp;
    //cout<<"fff"<<endl;
    for(ll i=0;i<=n;i++){
        ll t=psum[i]-i;
        mp[t]++;
        ans=ans+(mp[t]-1);
    }
    cout<<ans<<endl;

 
   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    
    cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}