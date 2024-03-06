#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        tree[i].push_back(a);
        tree[a].push_back(i);

    }
    vector<int>col(n+1);
    for(int i=1;i<=n;i++){
        cin>>col[i];
    }
    
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