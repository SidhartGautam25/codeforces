#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve()
{
    int n;
    cin>>n;
    vector<vector<pair<int,int>>>tree(n+1);
    bool deg=false;
    vector<int>ans(n,-1);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        tree[a].push_back({b,i});
        tree[b].push_back({a,i});
        if(tree[a].size()==3 and deg==false){
            deg=true;
            ans[tree[a][0].second]=0;
            ans[tree[a][1].second]=1;
            ans[tree[a][2].second]=2;
        }
         if(tree[b].size()==3 and deg==false){
            deg=true;
            ans[tree[b][0].second]=0;
            ans[tree[b][1].second]=1;
            ans[tree[b][2].second]=2;
        }
    }
    int val=3;
    if(deg){
        for(int i=1;i<ans.size();i++){
            if(ans[i]==-1){
                ans[i]=val;
                val++;
            }
        }

    }else{
        val=0;
        for(int i=1;i<ans.size();i++){
            ans[i]=val;
            val++;
        }
    }
    for(int i=1;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
 

   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
