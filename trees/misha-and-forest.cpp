#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

            
 
ll facto(ll n){
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}




ll ncr(ll n,ll r){
    ll prod=1;
      for(ll i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}



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



void solve(){
    // int n;
    // cin>>n;
    // vector<pair<int,pair<int,int>>>arr(n);
    // for(int i=0;i<n;i++){
    //     int d,x;
    //     cin>>d>>x;
    //     arr[i].first=d;
    //     arr[i].second=make_pair(x,i);
    // }
    // sort(arr.begin(),arr.end());
    // // cout<<"array is "<<endl;
    // // for(int i=0;i<n;i++){
    // //     int d=arr[i].first;
    // //     int x=arr[i].second.first;
    // //     int node=arr[i].second.second;
    // //     cout<<"deg is "<<d<<" x is "<<x<<" node is "<<node<<endl;
    // // }
    // vector<vector<int>>tree(n+1);
    // for(int i=0;i<n;i++){
    //     if(arr[i].first==1){
    //         int node=arr[i].second.first;
    //         int nbr=arr[i].second.second;
    //         tree[nbr].push_back(node);
    //         tree[node].push_back(nbr);
    //     }else{
    //         int xxor=arr[i].second.first;
    //         int node=arr[i].second.second;
    //         if(arr[i].first>tree[node].size()){
    //             for(int j=0;j<tree[node].size();j++){
    //             xxor=xxor^tree[node][j];
    //         }
    //         tree[node].push_back(xxor);
    //         tree[xxor].push_back(node);
                
    //         }
            
    //     }
    // }
   
    


    int n;
    cin>>n;
    vector<pair<int,int>>arr(n+1);
    queue<pair<int,int>>q;
    vector<vector<int>>tree(n+1);
    for(int i=0;i<n;i++){
        int d,xxor;
        cin>>d>>xxor;
        arr[i].first=d;
        arr[i].second=xxor;
        if(d==1){
            q.push(make_pair(i,xxor));
        }
    }
    while(q.size()>0){
        int n1=q.front().first;
        int n2=q.front().second;
        q.pop();
        tree[n1].push_back(n2);
        tree[n2].push_back(n1);
        arr[n2].first=arr[n2].first-1;
        arr[n2].second=arr[n2].second^n1;
        if(arr[n2].first==1){
            q.push(make_pair(n2,arr[n2].second));
        }

    }
    set<pair<int,int>>ms;
    vector<pair<int,int>>ed;
    for(int i=0;i<tree.size();i++){
        for(int j=0;j<tree[i].size();j++){
            int x=i;
            int y=tree[i][j];
            int mmin=min(x,y);
            int mmax=max(x,y);
            if(ms.find(make_pair(mmin,mmax))==ms.end()){
               ed.push_back(make_pair(mmin,mmax));
                ms.insert(make_pair(mmin,mmax));
            }
        }
    }
    cout<<ed.size()<<endl;
    for(int i=0;i<ed.size();i++){
        cout<<ed[i].first<<" "<<ed[i].second<<endl;
    }
   
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}