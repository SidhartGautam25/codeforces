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
    string s;
    set<char>r;
    set<char>l;
    cin>>s;
    vector<int>l(n+1);
    vector<int>r(n+1);
    l[0]=0;
    r[n]=0;
    for(int i=0;i<n;i++ ){
        l.insert(s[i]);
        l[i+1]=l.size();
    }
    for(int i=n-1;i>=0;i--){
        r.insert(s[i]);
        r[i]=r.size();
    }
    int ans=INT_MIN;
    for(int i=0;i<=n;i++){
        ans=max(ans,r[i]+l[i]);
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