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
    string s;
    cin>>s;
    vector<pair<int,int>>tree(n+1);
    
    
    for(int i=1;i<=n;i++){
        int a,b;
        // cout<<"node is "<<i<<" and a= "
       
        cin>>a>>b;
        
        pair<int,int>p=make_pair(a,b);
        tree[i]=p;
        
    }
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    ll count=0;
    vector<int>ans[1];
    int node=1;
    dfs(tree,node,count,ans,s);
    


   

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
