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
    sort(arr.begin(),arr.end());
    int ans=1;
    for(int i=0;i,n;i++){
        if(arr[i]>=ans){
            ans++;
        }
    }
    cout<<ans<<endl;
   
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}