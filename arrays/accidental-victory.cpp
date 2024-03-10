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
    vector<int>dup(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        dup[i]=arr[i];
    }
    sort(arr.begin(),arr.end());
    ll s=0;
    int j=-1;
    int limit=-1;
    for(int i=0;i<n-1;i++){
        s=s+arr[i];
        if(s>=arr[i+1]){
            continue;
        }else{
            //limit=arr[i]
            j=i;
          
        }
    }
    int count=n-(j+2)+1;
    int lim=arr[j+1];
    cout<<count<<endl;
    for(int i=0;i<n;i++){
        if(dup[i]>=lim){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
 
  
   
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