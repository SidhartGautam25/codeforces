#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   ll n,k;
   cin>>n>>k;
   vector<ll>arr(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   ll mmax=0;
   ll sum=0;
   ll s=0;
   for(ll i=0;i<n;i++){
        s=s+arr[i];
      if(sum+arr[i]>=arr[i]){
         
        sum=sum+arr[i];
        mmax=max(mmax,sum);
      }else{
         
        sum=arr[i];
        mmax=max(mmax,sum);
      }
   }
  // cout<<"mmax "<<mmax<<endl;
  s=s-mmax;
   ll ans=mmax;
   ll i=1;
   ll p=1;
   while(i<=k){
   
    p=((p%mod)*(2%mod))%mod;
    //cout<<"i "<<i<<" p "<<p<<endl;
    i++;
   }
   cout<<"s "<<s<<endl;
   ans=((ans%mod)*(p%mod))%mod;
   cout<<"ans "<<ans<<endl;
   ans=((ans%mod)+(s%mod))%mod;
   cout<<"final "<<ans<<endl;
   ans=(ans+mod)%mod;
   cout<<ans<<endl;

   
 
}
ll main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}