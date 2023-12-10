#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,m;
    cin>>n>>m;
    vector<bool>blockage(n+1,false);

    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        blockage[b]=true;

    }
    int middle=-1;
    for(int i=1;i<=n;i++){
        if(blockage[i]==false){
            middle=i;
            break;
        }
    }
    vector<pair<int,int>>edge;
    for(int i=1;i<=n;i++){
        if(i==middle){
            continue;
        }else{
            pair<int,int>e;
            e.first=middle;
            e.second=i;
            edge.push_back(e);
        }
    }

    for(int i=0i<edge.size();i++){
        cout<<edge[i].first<<" "<<edge[i].second<<endl;
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