#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void dfs(vector<pair<int,int>>&tree,int node,int count,vector<int>&ans,string& s){
    if(tree[node].first==0 and tree[node].second==0){
        ans[0]=min(ans[0],count);
        return;
    }
    if(tree[node].first != 0){
        if(s[node-1] != 'L'){
            dfs(tree,tree[node].first,count+1,ans,s);
        }else{
            dfs(tree,tree[node].first,count,ans,s);
        }
    }
    if(tree[node].second != 0){
        if(s[node-1] != 'R'){
            dfs(tree,tree[node].second,count+1,ans,s);
        }else{
            dfs(tree,tree[node].second,count,ans,s);
        }
    }
}

void solve()
{
    
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]++;
    }
    for(auto it:mp){
        if(it.second==2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;


   

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
