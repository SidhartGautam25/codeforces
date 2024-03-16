#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353



int mul(int x, int y)
{
    return (x * 1ll * y) % mod;
}


int binpow(int x, int y)
{
    int z = 1;
    while(y)
    {
        if(y & 1) z = mul(z, x);
        x = mul(x, x);
        y >>= 1;
    }
    return z;
}


int inv(int x)
{
    return binpow(x, mod - 2);
}

int divide(int x, int y)
{
    return mul(x, inv(y));
}

ll ncr(int n,int r){
    vector<int>fact(n+1);
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i] = mul(fact[i - 1], i);
    }
    return divide(fact[n],mul(fact[r],fact[n-r]));
}



void solve(){
   int n,m;
   cin>>n>>m;
   int ans=n-2;
   for(int i=1;i<=(n-3);i++){
    ans=(ans*2)%mod;
   }
   ans=((ans%mod)*(ncr(m,n-1)%mod))%mod;
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