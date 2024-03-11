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
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0;
    ll count=0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(ll i=0;i<n;i++){
        sum=sum+arr[i];
        count++;
        if(arr[i]<0){
            pq.push(arr[i]);
        }
        if(sum<0){
            sum=sum-pq.top();
            pq.pop();
            count--;
        }

    }
    cout<<count<<endl;

 
   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    
    //cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}