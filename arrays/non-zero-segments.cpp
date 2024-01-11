#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll sum=0;
    unordered_map<ll,ll>mp;
    mp[0]=-1;
    ll count=0;
    for(ll i=0;i<n;i++){
        sum=sum+arr[i];
        if(mp.find(sum) != mp.end()){
            count++;
            sum=arr[i];
            mp.clear();
            mp[sum]=i;
            mp[0]=-1;
        }else{
            mp[sum]=i;
        }
    }
    cout<<count<<endl;
    
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