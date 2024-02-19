#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

            
 
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
        return ((temp) * (temp));
    else{
        ll p1=((x)*(temp));
        ll p2=((p1)*(temp))%mod;
        return p2;
    }
        
}




void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll i=n-1;
    ll j=n-1;
    ll count=0;
    ll ans=1;
    //map<ll,ll>mp;
    while(j>=0){
        //cout<<"a[i] is "<<a[i]<<" and b[i] is "<<b[i]<<endl;
        while(i>=0 and a[i]>b[j]){
           // if(mp.find(a[i])==mp.end()){
                count++;
               // mp[a[i]]++;
            //}
            i--;
        }
        //cout<<"count is "<<count<<endl;
        ans=((ans%mod)*(count%mod))%mod;
        count--;
        j--;
    }
    cout<<ans<<endl;
    return;

   
    
    
    
  
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