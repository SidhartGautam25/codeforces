#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;

    int kCoinReq=m/k;
    int oneCoinReq=m%k;
    int kfancyneeded=max(0,kCoinReq-ak);
    int ofancyneeded=max(0,oneCoinReq-a1);
    int normalonerem=max(0,a1-oneCoinReq);

    if(kfancyneeded==0){
        cout<<ofancyneeded<<endl;
        return;
    }else{
        if(normalonerem==0){
            int ans=kfancyneeded+ofancyneeded;
            cout<<ans<<endl;
            return;
        }else{
            int replaceFancyK=normalonerem/k;
            int ans=min(0,kfancyneeded-replaceFancyK);
            cout<<ans<<endl;
            return;

        }
    }
    cout<<kfancyneeded+ofancyneeded<<endl;

 
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