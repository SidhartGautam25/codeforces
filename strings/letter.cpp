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
   string s,t;
   cin>>s>>t;
   int n=s.size();
   map<char,int>mp;
   for(int i=0;i<n;i++){
     mp[s[i]]++;
       

   }
   for(int i=0;i<n;i++){
     if(mp.find(t[i]) != mp.end()){
        mp[t[i]]--;
        if(mp[t[i]]<0){
            cout<<"NO"<<endl;
            return;
        }
     }else{
        cout<<"NO"<<endl;
        return;

     }
   }
   cout<<"YES"<<endl;
   return;

   
    
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