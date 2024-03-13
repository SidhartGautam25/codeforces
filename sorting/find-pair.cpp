#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end());
    ll r=0;
    ll i=0;
    while(i<n and r+n*mp[arr[i]]<k){
        r=r+n*mp[arr[i]];
        i=i+mp[arr[i]];
    }
    ll rem=k-r;
    ll j=0;
    //cout<<"rem "<<rem<<endl;
    while(j<n and rem-mp[arr[i]]>0){
        rem=rem-mp[arr[i]];
        j++;
    }
    //cout<<i<<" "<<j<<endl;
    cout<<arr[i]<<" "<<arr[j]<<endl;
   
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