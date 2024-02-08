#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>>tree(n+1);
    vector<int>degree(n+1,0);
    vector<bool>rem(n+1,false);
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        degree[a]++;
        degree[b]++;
        tree[a].push_back(b);
        tree[b].push_back(a);

    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(degree[i]==1){
            q.push(i);
            rem[i]=true;
        }
    }
    for(int i=0;i<k;i++){
        queue<int>temp;
        while(q.size()>0){
            int curr=q.front();
            q.pop();
            for(int j=0;j<tree[curr].size();j++){
                int parent=tree[curr][j];
                if(rem[parent]==false){
                    degree[parent]--;
                    if(degree[parent]==1){
                        temp.push(parent);
                    }
                }

            }
        }
        q=temp;
    }
    for(int i=1;i<=n;i++){
        if(rem[i]==false){
            cout<<i<<" ";
        }
    }
    cout<<endl;
   
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
