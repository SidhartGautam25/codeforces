#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll dfs(vector<vector<pair<ll,ll>>>&tree,ll curr,ll parent,vector<ll>&sub){
        ll count=0;
        for(ll i=0;i<tree[curr].size();i++){
            ll child=tree[curr][i].first;
            if(child != parent){
                count=count+dfs(tree,child,curr,sub);
            }
        }
        sub[curr]=count+1;
        return sub[curr];
}

void myfun(vector<vector<pair<ll,ll>>>&tree,vector<ll>&v,ll curr,ll parent,vector<ll>&sub,ll& count,ll mmin,ll dis){
    if(v[curr]<(dis-mmin)){
        count=count+sub[curr];
        return;
    }

    for(ll i=0;i<tree[curr].size();i++){
        ll child=tree[curr][i].first;
        ll w=tree[curr][i].second;
        if(child != parent){
            ll ddis=dis+w;
            ll myminn=min(ddis,mmin);
            myfun(tree,v,child,curr,sub,count,myminn,ddis);
        }
    }

}


void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    v[0]=0;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<vector<pair<ll,ll>>>tree(n+1);
    for(ll i=1;i<n;i++){
        ll u=i+1;
        ll v,w;
        cin>>v>>w;
        tree[u].push_back(make_pair(v,w));
        tree[v].push_back(make_pair(u,w));
    }
    vector<ll>sub(n+1);
    ll node=1;
    ll p=1;
    ll c=dfs(tree,node,p,sub);
    ll count=0;
    ll mmin=0;
    ll dis=0;
    myfun(tree,v,node,p,sub,count,mmin,dis);
    cout<<count<<endl;
   
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