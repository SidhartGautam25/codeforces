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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
        if(s<0){
            
        }
    }
    
  

 
   
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