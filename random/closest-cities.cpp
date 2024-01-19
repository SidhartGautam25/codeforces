#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007




void solve(){       
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll m;
    cin>>m;
    vector<pair<ll,ll>>query;
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        query.push_back(make_pair(a,b));
    }

    vector<ll>cost1(n,0);
    vector<ll>cost2(n,0);
    for(int i=1;i<n;i++){
        if(i==1){
            cost1[i]=1;
        }else{
            if((arr[i-1]-arr[i-2])>(arr[i]-arr[i-1])){
                cost1[i]=cost1[i-1]+1;
            }else{
                cost1[i]=cost1[i-1]+(arr[i]-arr[i-1]);
            }
        }
    }
    
    for(int i=n-2;i>=0;i--){
        if(i==n-2){
            cost2[i]=1;
        }else{
            if((abs(arr[i+1]-arr[i+2]))>(abs(arr[i]-arr[i+1]))){
                cost2[i]=cost2[i+1]+1;
            }else{
                cost2[i]=cost2[i+1]+(abs(arr[i]-arr[i+1]));
            }
        }
    }
    
    
    
    // for(int i=0;i<n;i++){
    //     cout<<"cost "<<cost[i]<<endl;
    // }
    ll curr_cost;
    for(int i=0;i<m;i++){
        ll c1=query[i].first;
        ll c2=query[i].second;
        if(c1<c2){
             curr_cost=cost1[c2-1]-cost1[c1-1];
             cout<<curr_cost<<endl;
            
        }else{
            curr_cost=cost2[c2-1]-cost2[c1-1];
            cout<<curr_cost<<endl;
        }
       
        
    }
   
 
  

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }

    return 0;
}