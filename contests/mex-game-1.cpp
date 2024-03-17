
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int mmax=INT_MIN;
    mp<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        mmax=max(mmax,arr[i]);
    }
    if(mp.find(0)==mp.end()){
        cout<<"0"<<endl;
        return;
    }
    for(int i=1;i<=(mmax+2);i++){
        if(mp.find(i)==mp.end()){
            cout<<i<<endl;
            return;
        }else if(mp[i]<=1){
            cout<<i<<endl;
            return;
        }
    }
    
    
    
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