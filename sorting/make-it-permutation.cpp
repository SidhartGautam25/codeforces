#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007




void solve(){
   
    ll n,insertion,deletion;
    cin>>n>>deletion>>insertion;
    set<ll>ms;
    vector<ll>arr(n);
    vector<ll>updated;
   
    ll cost=0;
    for(ll i=0;i<n;i++){
        
        cin>>arr[i];
        ms.insert(arr[i]);
    }
    if(ms.find(1)==ms.end()){
        arr.push_back(1);
        n++;
        ms.insert(1);
        cost=cost+insertion;
    }
    for(auto it:ms){
        ll i=it;
        //cout<<i<<" ";
        updated.push_back(i);
    }
    cout<<endl;
    ll m=ms.size();
    //cout<<"n "<<n<<" m "  <<m<<" deletion "<<deletion<<" cost "<<cost<<endl;
    cost=cost+(n-m)*deletion;
    ll ans=LLONG_MAX;
    //cout<<"cost "<<cost<<endl;
    for(ll i=0;i<updated.size();i++){
        ll curr=updated[i];
        ll temp=(curr-i-1)*insertion+(m-i-1)*deletion;
        //cout<<"i "<<i<<" temp "<<temp<<endl;
        temp=temp+cost;
        ans=min(temp,ans);
    }
    cout<<ans<<endl;
    
    
   
    
 
  

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}