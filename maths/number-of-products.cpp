#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define mod  998244353




void solve()
{
   
   ll n;
   cin>>n;
   vector<ll>arr(n);
   vector<ll>prod(n);
   for(ll i=0;i<n;i++){
     if(i==0){
        cin>>arr[i];
        if(arr[i]>=0){
            arr[i]=1;
            prod[i]=1;
        }else{
            arr[i]=-1;
            prod[i]=-1;
        }
     }else{
        cin>>arr[i];
        if(arr[i]>=0){
            arr[i]=1;
        }else{
            arr[i]=-1;
        }
        prod[i]=prod[i-1]*arr[i];
     }
   }
   ll ans=0;
   ll pp=0;
   ll pn=0;
   ll nn=0;
   ll np=0;
   for(ll i=0;i<n;i++){
       if(arr[i]==0){
           continue;
       }
       
    
    
    if(arr[i]>0){
        if(prod[i]>0){
            pp++;

        }else{
            pn++;

        }
    }else{
        if(prod[i]>0){
            np++;

        }else{
            nn++;

        }
    }
    
    
      if(prod[i]<0){
        ll temp=pp+nn;
         ans=ans+temp;
    }else{
        ll temp=pn+np;
        ans=ans+temp;
    }
    
   }
   
  
   
 ll total=(n*(n+1))/2;
 ll pos=total-ans;
 cout<<ans<<" "<<pos<<endl;



    
  
  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}
