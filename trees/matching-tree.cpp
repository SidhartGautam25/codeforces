#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void build_anses_dp(vector<int>&parent,vector<vector<int>>&dp){
    int n=parent.size();
    int mmax=17;//this number is dur to the case that with 17,we can calculate for any given k upto 10^5
    for(int i=0;i<n;i++){
        dp[0][i]=parent[i];
    }
    for(int i=1;i<mmax;i++){
        for(int j=0;j<n;j++){
            // let say we have to find 8th ansestor,then first we find 4th ansestor,and then again 4th ansestor
            // of the 4th ansestor
            //let say we call 4th ansestor anses1
            //then anses1 will be
            int anses1=dp[i-1][j];//this is because ith box of j is storing 2^i th ansestor,
            // so 8th ansestor means 2^3,means i equal to 3,then 4th ansestor means 2^2,
            // means i-1,3-1 =2,thats why anses1 is equal to dp[i-1][j]

            // now lets say 8th ansestor be anses2,then anses2 will be 4th ansestor of anses 1;
            // so anses2 will be 
            int anses2=dp[i-1][anses1];
            dp[i][j]=anses2;
        }
    }

}

int query_for_kth_ansestor(int node,int k,vector<vector<int>>&dp){
    int mmax=17;
    for(int i=0;i<mmax;i++){
        int mask=(1<<i);
        if((k&mask)>0){
            node=dp[i][node];
        }
    }
    return node;
}



void dfs(vector<vector<int>>&tree,vector<bool>&vis,int curr,vector<vector<int>>&dp,int parent){
    if(vis[curr]){
        return;
    }
    vis[curr]=true;
    int p=0;
    if(curr != 1 and (tree[p].size()==1)){
        dp[curr][0]=0;
        dp[curr][1]=0;
        return;
    }
    for(int i=0;i<tree[curr].size();i++){
        int child=tree[curr][i];
        if(child != parent){
             if(dp[tree[curr][i]][0]== -1 or dp[tree[curr][i]][1]==-1){
                    dfs(tree,vis,child,dp,curr);
             }
            int child=tree[curr][i];
            p=p+max(dp[child][0],dp[child][1]);

        }
       
    }
    dp[curr][0]=p;
    int mmax=-1;
    for(int i=0;i<tree[curr].size();i++){
        int child=tree[curr][i];
        if(child != parent){
            int temp=p-max(dp[child][0],dp[child][1])+dp[child][0];
            mmax=max(mmax,temp);

        }
    }
    dp[curr][1]=1+mmax;
}


void solve(){
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    vector<vector<int>>dp(n+1,vector<int>(2,-1));
    vector<bool>vis(n+1,false);
    int node=1;
    int parent=1;
    dfs(tree,vis,node,dp,parent);
    int ans=max(dp[1][0],dp[1][1]);
    cout<<ans<<endl;
    
   
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}