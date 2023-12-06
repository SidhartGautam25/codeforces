#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,l;
    cin>>n>>l;
    vector<ll>arr;
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    ll d=l;
    for(int i=0;i<n;i++){
        if((arr[0] != 0) and i==0){
            ll temp=2*arr[i];
            d=temp;
        }else if(i==0 and (arr[i]==0)){
            d=0;
        }else{
            ll temp=arr[i]-arr[i-1];
            d=max(d,temp);
        }
    }
    if(arr[n-1] != l){
        ll temp=2*(l-arr[n-1]);
        d=max(d,temp);
    }
    float dis=d;
    float radius=dis/2.0;
     printf("%.10f\n",d/2.0);
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    // cin>>t;
    while(t--){
        solve();
     }

    return 0;
}
