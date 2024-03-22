#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(){

    for(int i=0;i<tree[curr].size();i++){
        int child=tree[curr][i];
        if(child != p){
            dfs();
            
        }
    }
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<vector<int>>dp(n+1,vector<int>(k));
    dfs();


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