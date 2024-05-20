#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int u,v;
        tree[u].push_back(v);
        tree[v].push_back(u);
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