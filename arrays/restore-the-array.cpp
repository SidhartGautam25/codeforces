#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

void dfs(vector<vector<int>>&tree,vector<int>&col,int curr,map<int,bool>&mc,map<int,int>&dp,map<int,int>&dp2,vector<bool>&vis){
    if(vis[curr]){
        return;
    }
    vis[curr]=true;
    int clr=col[curr];
    //cout<<"color of "<<curr<<" is "<<clr<<endl;
    bool first=false;
    if(mc.find(clr) != mc.end()){
        if(mc[clr]==true){
            dp2[clr]++;

        }else{
            mc[clr]=true;
            first=true;
            dp[clr]++;
        }
    }else{
        mc[clr]=true;
        first=true;
        dp[clr]++;
    }
    for(int i=0;i<tree[curr].size();i++){
        int next=tree[curr][i];
        dfs(tree,col,next,mc,dp,dp2,vis);
    }
    if(first){
        mc[clr]=false;
    }
}

void solve(){
    int n;
    vector<int>b(n-1);
    for(int i=1;i<n;i++){
        cin>>b[i-1];
    }
    vector<int>a(n);
    a[0]=b[0];
    a[n-1]=b[n-2];
    for(int i=1;i<n-1;i++){
        a[i]=min(b[i-1],b[i]);
        cout<<a[i]<<" ";
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