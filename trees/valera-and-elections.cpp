#include <bits/stdc++.h>
using namespace std;



#define ll long long
#define mod 1000000007



void make_graph(int n,vector<vector<pair<int,int>>>& graph){
     for(int i=1;i<=n;i++){
         int a,b,c;
         cin>>a>>b>>c;
         graph[a].push_back(make_pair(b,c));
         graph[b].push_back(make_pair(a,c));

     }
}

void dfs(vector<vector<pair<int,int>>>& graph,int curr,vector<bool>& vis,ll& count,vector<int>& value){
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
     int n;
     cin>>n;
     vector<vector<pair<int,int>>>graph(n+1);
     vector<int>value(n+1);
     vector<bool>vis(n+1,false);
     ll count=0;
     make_graph(n-1,graph);
     for(int i=0;i<n;i++){
        cin>>value[i+1];
     }
     dfs(graph,1,vis,count,value);
     if(value[1]==0){
        cout<<count<<endl;
     }else{
        count=count+abs(value[1]);
        cout<<count<<endl;
     }
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