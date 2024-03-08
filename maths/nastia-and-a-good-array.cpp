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
    int x=0;
    int mmin=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<mmin){
            mmin=arr[i];
            x=i;
        }
    }
    int y=0;
    cout<<n-1<<endl;
    while(y<n){
        if(y != x){
            int a,b,c,d;
            a=x;
            b=y;
            c=mmin;
            d=arr[y]+abs(y-x);
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
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