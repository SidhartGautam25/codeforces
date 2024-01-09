#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007




void solve(){
    int l,r;
    cin>>l>>r;
    unordered_map<int,int>mp;
    int mmin=INT_MAX;
    for(int i=0;i<=30;i++){
        int count=0;
        for(int j=l;j<=r;j++){
            if(((j)&(1<<i))==0){
               count++;
            }
        }
        mmin=min(mmin,count);
    }
    cout<<mmin<<endl;
    //time limit exceded
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