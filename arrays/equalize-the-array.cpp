#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    unordered_map<ll,ll>mp;
    vector<ll>freq;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto it:mp){
        freq.push_back(it.second);
    }
    sort(freq.begin(),freq.end());
   
    for(ll i=0;i<freq.size();i++){
        sum=sum+freq[i];
    }
    ll ans=sum;
    ll m=freq.size();
    for(ll i=0;i<m;i++){
        if(i>0 and freq[i]==freq[i-1]){
            continue;
        }
        ll removal=sum-(freq[i]*(m-i));
        ans=min(ans,removal);


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