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
    ll minInd=0;
    ll mmin=arr[0];
    for(ll i=1;i<n;i++){
        if(mmin>arr[i]){
            mmin=arr[i];
            minInd=i;
        }
    }
    for(ll i=minInd+1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }else{
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<minInd<<endl;
    
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