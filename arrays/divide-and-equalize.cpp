#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

void findfactors(int n,unordered_map<int,int>&mp){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            mp[i]++;
        }
    }
}

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        findfactors(arr[i],mp);
    }
    int factorCount=-1;
    for(auto it:mp){
        int t=it.second;
        if(factorCount==-1){
            factorCount=t;
        }else if(factorCount != t){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;

 
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