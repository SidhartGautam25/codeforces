#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

lcm(ll a,ll b){
    ll g=__gcd(a,b);
    ll l=(a*b)/g;
    return l;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    vector<ll>b(n+1);
    b[0]=arr[0];
    for(ll i=1;i<n;i++){
       b[i]=lcm(arr[i],arr[i-1]);
    }
    b[n]=arr[n-1];
    for(ll i=0;i<n;i++){
        if(__gcd(b[i],b[i+1])==arr[i]){
            continue;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

 
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
