#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll p,q;
    cin>>p>>q;
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll i=0;
    while(i<=(n-2)){
        int gcd=__gcd(p,q);
        p=p/gcd;
        q=q/gcd;
        
        if(p<=(arr[i]*q)){
            cout<<"NO"<<endl;
            return;
        }
        ll x=q;
        //cout<<"arr[i]*q "<<arr[i]*q<<endl;
        ll y=p-arr[i]*q;
        p=x;
        q=y;
        if(q==0){
            cout<<"NO"<<endl;
            return;
        }
        i++;
    }
    //cout<<"p "<<p<<" q "<<q<<endl;
    //cout<<"p/q "<<p/q<<endl;
    if(p%q==0){
        if((p/q)==arr[n-1]){
             cout<<"YES"<<endl;
        return;

        }
       
    }
    cout<<"NO"<<endl;
    return;
     
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