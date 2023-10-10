#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    unordered_map<ll,ll>mp;
    ll mmax=INT_MIN;
    ll gamenum;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr[i]=temp;
        mp[temp]++;
        if(mmax<temp){
            mmax=temp;
        }
    }
    gamenum=mmax;
    ll khali=0;
    for(int i=0;i<n;i++){
        khali=khali+(mmax-arr[i]);
    }
    if(khali>=mmax){
        cout<<mmax<<endl;
        return;
    }else{
        while(khali<gamenum){
            khali=khali+n;
            gamenum++;
        }
        cout<<gamenum<<endl;

    }
    
 
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