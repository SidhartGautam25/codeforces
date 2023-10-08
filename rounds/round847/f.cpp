#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&mytree,int curr,vector<int>&mindis,int positivity){

}

void solve(){
   int n,c0;
   cin>>>n>>c0;
   vector<int>black(n+1,0);
   black[c0]=1;
   vector<int>paint;
   for(int i=1;i<=n-1;i++){
     int temp;
     cin>>temp;
     paint.push_back(temp);
   }
   vector<vector<int>>mytree(n+1);
   for(int i=1;i<n;i++){
      int u,v;
      cin>>u>>v;
      mytree[u].push_back(v);
      mytree[v].push_back(u);
   }
   
   int positivity=INT_MAX;
   vector<int>mindis(n+1,INT_MAX);
   mindis[c0]=0;
   for(int i=0;i<paint.size();i++){
     int curr=paint[i];
     int pos;
     vector<bool>visited(n+1,)
     dfs(mytree,curr,mindis,positivity)
   }



}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}