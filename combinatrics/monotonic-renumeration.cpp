#include <bits/stdc++.h>
using namespace std;

#define int long long
//#define mod  998244353


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
    int mod= 998244353;

    int n;
    cin>>n;
    vector<int>arr(n);
     unordered_map<int,int>mp;
     
    for(int i=0;i<n;i++){
        cin>>arr[i];
          mp[arr[i]]=i;
    }
   
   
    int count=0;
    int ans=1;
    int b=0;
    // for(int i=0;i<n;i++){
    //     cout<<mp[arr[i]]<<" ";
    // }
    cout<<endl;
    for(int i=0;i<n;i++){
         b=max(mp[arr[i]],b);
        if(b==i){
            count++;
            if(count==1){
                ans=1;
            }else{
                ans=(ans*2)%mod;
                
            }
            
            b++;
        }
       // cout<<b<<" ";
    }
    cout<<endl;
    int t=2;
    //cout<<"count is "<<count<<endl;
    // ans=pow(t,count-1);
    //cout<<"count is "<<count<<endl;
    cout<<ans<<endl;
   


    
  
  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NUint);

    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
