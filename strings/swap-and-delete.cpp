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
        return ((temp%mod) * (temp%mod))%mod;
    else{
        ll p1=((x%mod)*(temp%mod))%mod;
        ll p2=((p1%mod)*(temp%mod))%mod;
        return p2;
    }
        
}



void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int co=0;
    int cz=0;
    vector<pair<int,int>>arr(n+1);
    arr[0].first=0;
    arr[0].second=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            arr[i+1].first=arr[i].first+1;
            cz++;
        }else{
            arr[i+1].second=arr[i].second+1;
            co++;
        }
    }
    int needo=0;
    int needz=0;
    int i=0;
    while(i<n and needo<=co and needz<=cz){
        if(s[i]=='0'){
            needo++;
        }else{
            needz++;
        }
        
    }
    int cost=n-i;
    cout<<cost<<endl;
   
  
  
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