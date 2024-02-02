#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

pair<int,int> bfs(vector<vector<int>>&tree,int root){
    int n=tree.size()-1;
    queue<pair<int,int>>q;
    vector<bool>vis(n+1,false);
    q.push({root,0});
    vis[root]=true;
    int ansnode;
    int ans=0;
    while(q.size()>0){
        int node=q.front().first;
        int level=q.front().second;
        q.pop();
        for(int i=0;i<tree[node].size();i++){
            int next=tree[node][i];
            if(vis[next]==false){
                q.push({next,level+1});
                if(mp.find(next) != mp.end()){
                    if(ans<(level+1)){
                        ans=level+1;
                        ansnode=next;

                    }
                }
            }
        }
    }
    return make_pair(ans,ansnode);

}



void solve()
{
    int n,k;
    cin>>n>>k;
    unordered_map<int,int>mp;
    vector<vector<int>>tree(n+1);
    int leaf;
    for(int i=0;i<k;i++){
        int temp;
        cin>>temp;
        leaf=temp;
        mp[temp]++;
    }
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    pair<int,int>p1=bfs(tree,leaf);
    pair<int,int>p2=bfs(tree,p1.second);
    int dis=p2.first;
    if(dis%2==0){
        int ans=dis/2;
        cout<<ans<<endl;
        return;
    }
    int ans=(dis+1)/2;
    cout<<ans<<endl;
   
  

 

   

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
