#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void dfs(vector<vector<pair<ll,ll>>>&tree,ll node,vector<bool>&vis,vector<ll>&ans,bool two){
    if(vis[node]){
        return ;
    }
    vis[node]=true;
    if(tree[node].size()==3){
        ans[0]=-1;
        //cout<<"leave is "<<node<<endl;
        return ;
    }
    
    for(ll i=0;i<tree[node].size();i++){
        //cout<<"now going to "<<g[ind][i]<<endl;
        ll child=tree[node][i].first;
        ll edge=tree[node][i].second;
        if(ans[edge] != 0){
            continue;
        }else{
            if(two){
                ans[edge]=2;
                two=false;
                dfs(tree,child,vis,ans,two);
            }else{
                ans[edge]=3;
                two=true;
                dfs(tree,child,vis,ans,two);
            }
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<int>tree(n+1);
    int root=-1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(i==arr[i]){
            root=i;
        }
    }
    unordered_map<int,vector<int>>mp;
    unordered_set<int>ms;
    for(int i=1;i<tree.size();i++){
        ms.insert(tree[i]);
    }
    int j=1;
    vector<bool>vis(n+1,false);
    for(int i=1;i<=n;i++){
        if(ms.find(i)==ms.end()){
            int curr=i;
            while(vis[curr]==false){
                vis[curr]=true;
                mp[j].push_back(curr);
                curr=tree[i];
            }
            j++;
        }
    }
    cout<<mp.size()<<endl;
    for(int i=0;i<mp.size();i++){
        cout<<mp[i].size()<<endl;
        for(int k=0;k<mp[i].size();k++){
            cout<<mp[i][k]<<" ";
        }
        cout<<endl;
    }


   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
