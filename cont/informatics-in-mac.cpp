#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



ll power(ll x, ll y)
{
    ll temp;
    if (y == 0){
        ll ans=1;
        return ans;

    }
       
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp%mod) * (temp%mod))%mod;
    else{
        ll p1=((x%mod)*(temp%mod))%mod;
        ll p2=((p1%mod)*(temp%mod))%mod;
        return p2;
    }
        
}

ll ncr(int n,int r){
    ll prod=1;
      for(int i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}


void make_graph(int n,vector<vector<int>>& graph){
     for(int i=1;i<=n;i++){
         int a,b;
         cin>>a>>b;
         graph[a].push_back(b);
         graph[b].push_back(a);
     }
}

void dfs(vector<vector<int>>& graph,int curr,vector<bool>& vis,ll& count,vector<int>& value){
    if(vis[curr]==true){
        return;
    }
    vis[curr]=true;
    int pval=value[curr];
    for(int i=0;i<graph[curr].size();i++){
        int child=graph[curr][i];
        int cval=value[child];
        count=count+abs(pval-cval);
    }

}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.find(0)==mp.end()){
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<i<<" "<<i<<endl;
        }
        return;
    }else if(mp[0]==1){
        cout<<"-1"<<endl;
        return;

    }else{
        int mex=0;
        while(mp.find(mex) != mp.end()){
            mex++;
        }
        int i=0;
        int ans=1;
        vector<pair<int,int>>div;
        while(i<n){
             vector<int>found(mex+1,false);
             int j=i;
             int count=0;
             while(j<n){
                if(arr[j]<mex and found[arr[j]]==false){
                    found[arr[j]]=true;
                    count++;
                }
                if(count==mex){
                    //cout<<"pusiing "<<i+1<<" and "<<j+1<<endl;
                     div.push_back(make_pair(i+1,j+1));
                     j++;
                    i=j;
                   
                    ans++;
                    break;
                }
                j++;
             }
             if(j==n){
                 ans--;
                 div[div.size()-1].second=j;
                 break;
             }
        }
        if(ans==1){
            cout<<"-1"<<endl;
        }else{
            cout<<div.size()<<endl;
            for(int x=0;x<div.size();x++){
                cout<<div[x].first<<" "<<div[x].second<<endl;
            }

        }
       

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