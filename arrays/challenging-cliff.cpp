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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int mmin=arr[1]-arr[0];
    int i=1;
    int j=0;
    for(int x=2;x<n;x++){
        if(arr[x]-arr[x-1]<mmin){
            mmin=arr[x]-arr[x-1];
            i=x;
            j=x-1;
        }
    }
    
    
    vector<int>ans(n);
    ans[0]=arr[j];
    ans[n-1]=arr[i];
    i=i+1;
    if(i==n){
        i=0;
    }
    for(int x=1;x<n-1;x++){
        ans[x]=arr[i];
        i++;
        if(i==n){
            i=0;
        }
    }
    for(int x=0;x<n;x++){
        cout<<ans[x]<<" ";
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