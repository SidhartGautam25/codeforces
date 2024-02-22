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
    int n;
    cin>>n;
    cin>>s;
    int k;
    cin>>k;
    string t;
    cin>>t;
    set<char>ms;
    for(int i=0;i<k;i++){
        ms.insert(t[i]);
    }
    for(int i=0;i<n;i++){
        if(ms.find(s[i])==ms.end()){
            s[i]='0';
        }else{
            s[i]='1';
        }
    }
    bool first=true;
    int prev;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' and first==true){
            first=false;
            ans=max(ans,i);
            prev=i;

        }else if(s[i]=='1'){
            int temp=i-prev;
            ans=max(ans,temp);
            prev=i;
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