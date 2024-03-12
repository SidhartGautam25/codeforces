#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX

 
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>omax(n);
    vector<ll>emax(n);
    ll om=LLONG_MAX;
    ll em=LLONG_MAX;
    for(ll i=0;i<n;i++){
        if(i%2==0){
            em=min(em,arr[i]);
        }else{
            om=min(om,arr[i]);
        }
        omax[i]=om;
        emax[i]=em;
    }
    ll sum=arr[0];
    ll ans=LLONG_MAX;
    stack<ll>odd;
    stack<ll>even;
    even.push(arr[0]);
    for(ll i=1;i<n;i++){
        sum=sum+arr[i];
        if(i%2==0){
            even.push(arr[i]);
        }else{
            odd.push(arr[i]);
        }
        ll os=odd.size();
        ll es=even.size();
        ans=min(ans,sum+omax[i]*(n-os)+emax[i]*(n-es));
    }
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