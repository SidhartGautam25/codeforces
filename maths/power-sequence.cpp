#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   ll mmax=LLONG_MAX;
   ll n;
   cin>>n;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   ll ans=mmax;
   ll c=1;
   while(true){
    ll power=1;
    ll cost=0;
    bool overflow=false;
      for(int i=0;i<n;i++){
        power=power*c;
        if(power<0){
            overflow=true;
            break;
        }
        if(power>=mmax){
            overflow=true;
            break;

        }
        cost=abs(arr[i]-power);
      }
      if(!overflow){
        ans=min(ans,cost);
      }else{
        break;
      }
   }
   cout<<cost<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t>0){
    
        solve();
        t=t-1;
     }

    return 0;
}