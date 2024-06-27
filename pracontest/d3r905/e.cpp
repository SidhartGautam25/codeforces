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
    vector<ll>alt(n,0);
    for(ll i=1;i<n;i++){
        alt[i]=alt[i-1];
        if(arr[i]<arr[i-1]){
            ll temp=arr[i];
            while(temp<arr[i-1]){
                temp=temp*2;
                alt[i]++;
            }

        }else{
            ll temp=arr[i-1];
            while((temp*2<=arr[i]) && (alt[i]>0)){
                temp=temp*2;
                alt[i]--;

            }

        }
    }
    ll count=0;
    for(ll i=1;i<n;i++){
        count=count+alt[i];
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