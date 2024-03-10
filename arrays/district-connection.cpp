#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX
 
int dfs(vector<vector<int>>& tree,int curr,vector<bool>&vis,vector<int>&dp,int& count){
    if(vis[curr]){
        return 0;
    }
    if(tree[curr].size()==1 and curr != 1){
        dp[curr]=1;
        return 1;
    }
    vis[curr]=true;
    int c=0;
    for(int i=0;i<tree[curr].size();i++){
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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size()>1){
        cout<<"YES"<<endl;
        int diff=-1;
        vector<pair<int,int>>edges(n-1);
        int x=0;
        for(int i=1;i<n;i++){
            if(arr[0] != arr[i]){
                edges[x]=make_pair(1,i+1);
                x++;
                diff=i;
            }

        }
        for(int i=1;i<n;i++){
            if(arr[i]==arr[0]){
                edges[x]=make_pair(diff+1,i+1);
                x++;
            }
        }
        for(int i=1;i<n;i++){
            int x=edges[i-1].first;
            int y=edges[i-1].second;
            cout<<x<<" "<<y<<endl;
        }
        
    }else{
        cout<<"NO"<<endl;
        return;
    }
   
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