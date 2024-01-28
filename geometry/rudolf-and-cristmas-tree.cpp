#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
bool comp(const pair<int,int>&a,const pair<int,int>&b){
    
    a.first<b.first;
}

void dfs(vector<vector<int>>&g,vector<int>&dsu,vector<bool>&vis,int ind,int x){
    if(vis[ind]){
        return;
    }
    vis[ind]=true;
    dsu[ind]=x;
    cout<<"setting for ind "<<ind<<" and x is "<<x<<endl;
    for(int i=0;i<g[i].size();i++){
        dfs(g,dsu,vis,g[ind][i],x);
    }

}

void solve()
{
    int n, d, h;
        cin >> n >> d >> h;
        vector<int> y(n);
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        long double ans = (long double)d * h / 2.0;
        for (int i = 0; i + 1 < n; ++i) {
            if (y[i + 1] >= y[i] + h) ans += (long double)d * h / 2.0;
            else{
                long double d2 = (long double)d * (y[i] + h - y[i + 1]) / h;
                long double nh = y[i + 1] - y[i];
                ans += (d + d2) / 2.0 * nh;
            }
        }
        cout << ans << '\n';
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

