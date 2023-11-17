#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool check(unordered_map<ll,ll>&mp,ll& sum,vector<ll>& arr,long long temp){
    ll add=temp;
        while(temp<sum){
            if(mp.find(temp) != mp.end()){
                temp=temp+add;
            }else{
                return false;
            }

        }
        return true;
}

ll findans(unordered_map<ll,ll>&mp,ll& sum,vector<ll>& arr,long long temp){
    ll longest=mp[temp]+1;
    ll add=temp;
    while(temp<=sum){
        if(temp==sum){
            longest=max(longest,mp[sum]-mp[sum-add]);
            return longest;
        }else{
            longest=max(longest,mp[temp]-mp[temp-add]);
            temp=temp+add;
        }
    }
    return longest;
}


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    unordered_map<ll,ll>mp;
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        mp[sum]=i;
    }
    ll temp=0;
    ll ans=n;
    for(ll i=0;i<n;i++){
        temp=temp+arr[i];
        if(sum%temp==0){
            if(check(mp,sum,arr,temp)){
                ans=min(ans,findans(mp,sum,arr,temp));
            }
        }
    }
    cout<<ans<<endl;

 
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
