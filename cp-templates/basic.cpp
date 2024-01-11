#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


bool comp(const pair<int,int>&a,const pair<int,int>&b){
    return a.first<b.first;
}



void make_graph(int n,vector<vector<int>>& graph){
     for(int i=1;i<=n;i++){
         int a,b;
         cin>>a>>b;
         graph[a].push_back(b);
         graph[b].push_back(a);
     }
}

void dfs(vector<vector<int>>& graph,int curr,vector<bool>& vis,ll& count,vector<int>& value){
    if(vis[curr]==true){
        return;
    }
    vis[curr]=true;
    int pval=value[curr];
    for(int i=0;i<graph[curr].size();i++){
        int child=graph[curr][i];
        int cval=value[child];
        count=count+abs(pval-cval);
    }

}

void solve(){
    
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