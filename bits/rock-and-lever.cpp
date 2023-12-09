#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        for(ll j=29;j>=0;j--){
            ll x=1<<j;
            if((arr[i] & x) != 0){
                mp[j]++;
                break;
            }
        }
    }
    ll count=0;
    for(auto it:mp){
        ll a=it.first;
        ll b=it.second;
        //cout<<"a= "<<a<<" b "<<b<<endl;
        ll d;
        ll e;
        if(b<=1){
            continue;
        }else{
            if(b%2==0){
                d=b/2;
            }else{
                d=b;

            }
            if((b-1)%2==0){
                e=(b-1)/2;
            }else{
                e=(b-1);
            }
        }
        count=count+d*e;
    }
    cout<<count<<endl;
    
 
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
