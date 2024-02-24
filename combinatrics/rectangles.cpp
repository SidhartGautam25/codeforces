#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  LLONG_MAX

            
 
ll facto(ll n){
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}




ll ncr(ll n,ll r){
    ll prod=1;
      for(ll i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}



ll power(ll x, ll y)
{
    ll temp;
    if (y == 0){
        ll ans=1;
        return ans;

    }
       
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return ((temp%mod) * (temp%mod))%mod;
    else{
        ll p1=((x%mod)*(temp%mod))%mod;
        ll p2=((p1%mod)*(temp%mod))%mod;
        return p2;
    }
        
}



void solve(){
   
     ll n,m;
     cin>>n>>m;
     vector<vector<ll>>arr(n,vector<ll>(m,0));
     map<ll,ll>rb;
     map<ll,ll>cb;
     map<ll,ll>rw;
     map<ll,ll>cw;
     for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                rb[i]++;
                cb[j]++;
            }else{
                rw[i]++;
                cw[j]++;
            }

        }
     }
     ll ans=0;
     for(auto it:rb){
        ll countb=it.second;
        //  ll countw=m-countb;
        // cout<<"black count for row "<<it.first<<" is "<<countb<<endl;
        //  cout<<"white count for row "<<it.first<<" is "<<countw<<endl;
       
        ans=ans+power(2,countb);
        //ans=ans+power(2,countw);
        ans=ans-1;

     }
       for(auto it:rw){
        ll countb=it.second;
        //  ll countw=m-countb;
        // cout<<"black count for row "<<it.first<<" is "<<countb<<endl;
        //  cout<<"white count for row "<<it.first<<" is "<<countw<<endl;
       
        ans=ans+power(2,countb);
        //ans=ans+power(2,countw);
        ans=ans-1;

     }
     for(auto it:cb){
        ll b=it.second;
        // ll w=n-b;
        // cout<<"black count for column "<<it.first<<" is "<<b<<endl;
        //  cout<<"white count for column"<<it.first<<" is "<<w<<endl;
        ans=ans+power(2,b);
        // ans=ans+power(2,w);
        ans=ans-1;
     }
        for(auto it:cw){
        ll b=it.second;
        // ll w=n-b;
        // cout<<"black count for column "<<it.first<<" is "<<b<<endl;
        //  cout<<"white count for column"<<it.first<<" is "<<w<<endl;
        ans=ans+power(2,b);
        // ans=ans+power(2,w);
        ans=ans-1;
     }
    ans=ans-n*m;
    cout<<ans<<endl;
  
  
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