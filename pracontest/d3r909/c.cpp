#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
   ll n;
   cin>>n;
   vector<ll>arr(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   ll ans=INT_MIN;
   ll sum=0;
   for(ll i=0;i<n;i++){
     if(i==0){
        sum=sum+arr[i];
        ans=max(sum,ans);
     }else{
         ll r1=arr[i]%2;
         if(r1<0){
             r1=r1+2;
         }
         ll r2=arr[i-1]%2;
         if(r2<0){
             r2=r2+2;
         }
        if(r1 != r2){
            if(sum>0){
                sum=sum+arr[i];
            }else{
                sum=arr[i];
            }
             ans=max(sum,ans);
                
            }else{
           sum=arr[i];
           ans=max(ans,sum);
     }
           
          
     }
   }
    

    cout<<ans<<endl;
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