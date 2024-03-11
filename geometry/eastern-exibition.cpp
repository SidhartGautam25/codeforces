#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX
 
bool comp(pair<ll,ll>&a,pair<ll,ll>&b){
    if(a.first==a.first){
       return a.second<b.second;

    }
    return a.first<b.first;
}
 
void solve(){
    ll n;
    cin>>n;
    vector<ll>x(n);
    vector<ll>y(n);
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        x[i]=a;
        y[i]=b;
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    ll countx;
    ll county;
    if(x.size()%2==1){
        countx=1;
    }else{
        ll s=x.size();
        countx=x[s/2]-x[s/2-1]+1;
    }

    if(y.size()%2==1){
        county=1;
    }else{
        ll s=y.size();
        county=y[s/2]-y[s/2-1]+1;
    }
    ll ans=countx*county;
    cout<<ans<<endl;


 
   
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    
    cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}