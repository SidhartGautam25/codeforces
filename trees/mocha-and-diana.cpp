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
    // cout<<"setting for ind "<<ind<<" and x is "<<x<<endl;
    // cout<<"size is "<<g[ind].size()<<endl;
    for(int i=0;i<g[ind].size();i++){
        //cout<<"now going to "<<g[ind][i]<<endl;
        dfs(g,dsu,vis,g[ind][i],x);
    }

}

void solve()
{
  
     int n,m1,m2;
     cin>>n>>m1>>m2;
     vector<vector<int>>g1(n+1);
     vector<vector<int>>g2(n+1);
     for(int i=0;i<m1;i++){
        int a,b;
        cin>>a>>b;
        g1[a].push_back(b);
        g1[b].push_back(a);
     }
     for(int i=0;i<m2;i++){
        int a,b;
        cin>>a>>b;
        g2[a].push_back(b);
        g2[b].push_back(a);
     }
    //  for(int i=1;i<=n;i++){
    //     cout<<"vertex "<<i<<" is connected to "<<endl;
    //     for(int j=0;j<g1[i].size();j++){
    //         cout<<g1[i][j]<<endl;

    //     }
    //  }

     vector<int>gone(n+1);
     vector<bool>gonev(n+1,false);
     vector<int>gtwo(n+1);
     vector<bool>gtwov(n+1,false);

     int i=1;
     while(i<=n){
        if(gonev[i]){
            i++;
            continue;
        }
        //cout<<"calling dfs for i= "<<i<<endl;
        dfs(g1,gone,gonev,i,i);
        // for(int k=1;k<gonev.size();k++){
        //     cout<<"vertex "<<k<<" is "<<gonev[k]<<endl;
        // }
        i++;
        
     }
     i=1;
     while(i<=n){
        if(gtwov[i]){
            i++;
            continue;
        }
        dfs(g2,gtwo,gtwov,i,i);
        i++;

     }
    //  for(i=1;i<gone.size();i++){
    //     cout<<"x is "<<i<<" "<<gone[i]<<endl;
    //  }
     int count=0;
     vector<pair<int,int>>ans;
     for(int k=1;k<gone.size();k++){
        cout<<"gone "<<k<<" "<<gone[k]<<endl;
     }
     for(int k=0;k<gtwo.size();k++){
        cout<<"gtwo "<<k<<" "<<gtwo[k]<<endl;
     }
     set<int>msone;
     set<int>mstwo;
     
     for(i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(((gone[i] != gone[j]))&&(gtwo[i] != gtwo[j])){
                if((msone.find(gone[i])==msone.end()) or (msone.find(gone[j])==ms.end())){
                    if((mstwo.find(gtwo[i])==mstwo.end()) or (mstwo.find(gtwo[j])==mstwo.end())){
                        count++;
                        ans.push_back(make_pair(i,j));
                        msone.insert(gone[i]);
                        msone.insert(gone[j]);
                        mstwo.insert(gtwo[i]);
                        mstwo.insert(gtwo[j]);

                    }
                    

                }
              


            }
        }
     }
     cout<<count<<endl;
     for(i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
     }




   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}