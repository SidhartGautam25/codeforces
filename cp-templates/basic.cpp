#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



ll power(ll x, ll y)
{
    ll temp;
    if (y == 0){
        ll ans=1;
        return ans;

    }
       
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp%mod) * (temp%mod))%mod;
    else{
        ll p1=((x%mod)*(temp%mod))%mod;
        ll p2=((p1%mod)*(temp%mod))%mod;
        return p2;
    }
        
}

ll ncr(int n,int r){
    ll prod=1;
      for(int i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
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