#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(vector<vector<int>>&tree,int f,int node,unordered_map<int,vector<pair<int,int>>>&mp,vector<bool>&vis,int d){
    if(vis[node]){
        return;
    }
    vis[node]=true;
    if(tree[node].size()==1 and node != 1){
        mp[node].push_back(make_pair(f,d));
    }
    
    for(int i=0;i<tree[node].size();i++){
        int next=tree[node][i];
        dfs(tree,f,next,mp,vis,d+1);
    }
    
}

void goleaf(vector<vector<int>>&tree,unordered_map<int,vector<pair<int,int>>>&mp,int curr,int d,vector<bool>&ans,vector<bool>&vis){
    if(vis[curr]){
        return;
    }
    if(ans[0]){
        return;
    }
   
    vis[curr]=true;
    // for(auto it:mp){
    //     int f=it.first;
    //     vector<pair<int,int>>t=it.second;
    //     for(int i=0;i<t.size();i++){
    //         int dis=t[i].second;
    //         if(dis<=d){
    //             return;
    //         }
    //     }
    // }
    //vector<pair<int,int>>vec=mp[curr];
    if(tree[curr].size()==1 and curr != 1){
         for(int x=0;x<mp[curr].size();x++){
        int dis=mp[curr][x].second;
        if(dis<=d){
            return;
        }
    }
      
        ans[0]=true;
       // cout<<"we reached "<<curr<<" and its dis from 1 is "<<d<<endl;
        return;
    
        
    }
   
    for(int i=0;i<tree[curr].size();i++){
        int next=tree[curr][i];
        goleaf(tree,mp,next,d+1,ans,vis);
    }
}



void solve()
{
  
  int n,k;
  cin>>n>>k;
  vector<int>f(k);
  for(int i=0;i<k;i++){
    cin>>f[i];
    
  }
  vector<vector<int>>tree(n+1);
  for(int i=1;i<n;i++){
    int a,b;
    cin>>a>>b;
    tree[a].push_back(b);
    tree[b].push_back(a);
  }
  unordered_map<int,vector<pair<int,int>>>mp;
  vector<bool>vis(n+1,false);
  for(int i=0;i<k;i++){
    int currf=f[i];
   // vector<bool>vis(n+1,false);
    int d=0;
    dfs(tree,currf,currf,mp,vis,d);
    for(int i=1;i<=n;i++){
        vis[i]=false;
    }
  }
//   for(auto it:mp){
//       int x=it.first;
//       vector<pair<int,int>>y=it.second;
//       for(int j=0;j<y.size();j++){
//           int tempnode=y[j].first;
//           int dis=y[j].second;
//           cout<<"distance of "<<tempnode<<" from friend "<<x<<" is "<<dis<<endl;
//       }
//   }
   vector<bool>ans(1,false);
   int curr=1;
   int d=0;
   vector<bool>visited(n+1,false);
   goleaf(tree,mp,curr,d,ans,visited);
   if(ans[0]){
     cout<<"YES"<<endl;
     return;
   }
   cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
