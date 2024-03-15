#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    // vector<pair<int,int>>p(n);
    // vector<pair<int,int>>s(n);
    // p[0].first=arr[0];
    // p[0].second=arr[0];
    // for(int i=1;i<n;i++){
    //     p[i].first=min(p[i-1].first,arr[i]);
    //     p[i].second=max(p[i-1].second,arr[i]);
    // }
    // s[n-1].first=arr[n-1];
    // s[n-1].second=arr[n-1];
    // for(int i=n-2;i>=0;i--){
    //     s[i].first=min(s[i+1].first,arr[i]);
    //     s[i].second=max(s[i+1].second,arr[i]);
    // }
    int mini=mp[n];
    int maxi=mp[n];
    int ans=1;
    int count=1;
    for(int i=n-1;i>0;i--){
        mini=min(mini,mp[arr[i]]);
        maxi=max(maxi,mp[arr[i]]);
        count++;
        if((maxi-mini+1)==count){
            ans=max(ans,count);
        }

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