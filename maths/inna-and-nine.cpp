#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  998244353

            
 



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
    vector<ll>arr;
    ll temp=n;
    while(temp>0){
        ll d=temp%10;
        temp=temp/10;
        arr.push_back(d);
    }
    ll i=0;
    ll ans=1;
    while(i<n-1){
        ll l=i
        ll s=1;
        while(i+1<n and (arr[i]+arr[i+1])==9){
            i++;
            s++;
        }
        if(s%2==0){
            i++;
        }else{
            ans=ans*(s/2+1);
            i++;
        }


    }
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