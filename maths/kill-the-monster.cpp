#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll hc,dc;
    cin>>hc>>dc;
    ll hm,dm;
    cin>>hm>>dm;
    ll k,w,a;
    cin>>k>>w>>a;
    ll attack=(hm+dc-1)/dc;
    ll def=(hc+dm-1)/dm;
    if(def>=attack){
        cout<<"YES"<<endl;
        return;
    }else{
        for(ll i=0;i<=k;i++){
            ll j=k-i;
            ll thc=hc+i*a;
            ll tdc=dc+j*w;
            attack=(hm+tdc-1)/tdc;
            def=(thc+dm-1)/dm;
             if(def>=attack){
        cout<<"YES"<<endl;
        return;
    }
            
        }
    }
    cout<<"NO"<<endl;

 
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