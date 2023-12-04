#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll gcd1=arr[0];
    ll gcd2=arr[1];
    for(ll i=0;i<n;i=i+2){
        gcd1=__gcd(gcd1,arr[i]);
    }
    for(ll i=1;i<n;i=i+2){
        gcd2=__gcd(gcd2,arr[i]);
    }
    bool check1=true;
    bool check2=true;
   for(ll i=1;i<n;i=i+2){
      if(arr[i]%gcd1==0){
        check1=false;
        break;
      }
   }
   if(check1){
      cout<<gcd1<<endl;
      return;
   }
     for(ll i=0;i<n;i=i+2){
      if(arr[i]%gcd2==0){
        check2=false;
        break;
      }
   }
   if(check2){
    cout<<gcd2<<endl;
    return;
   }
   cout<<"0"<<endl;
   
    
 
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