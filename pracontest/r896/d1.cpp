#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(sum%n != 0){
        cout<<"NO"<<endl;
        return;
    }

    ll avg=sum/n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll curr=arr[i];
        if(curr==avg){
            continue;
        }
        ll diff=abs(curr-avg);
        ll py=diff&(-diff);
        ll px=py+diff;

        ll setBitCount= (ll) __builtin_popcount(px);
        if(setBitCount!=1){
            cout<<"NO"<<endl;
            return;
        }else{
            if(curr>avg){
                mp[px]--;
                mp[py]++;
            }else{
                mp[px]++;
                mp[py]--;
            }
        }
    }
    for(auto it:mp){
        ll f=it.second;
        if(f != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


    
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