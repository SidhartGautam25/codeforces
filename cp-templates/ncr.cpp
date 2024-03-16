#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007





int mul(int x, int y)
{
    return (x * 1ll * y) % MOD;
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
    return binpow(x, MOD - 2);
}

int divide(int x, int y)
{
    return mul(x, inv(y));
}

ll ncr(int n,int r){
    vector<int>fac[n+1];
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i] = mul(fact[i - 1], i);
    }
    return divide(fac[n],mul(fact[k],fac[n-k]));
}


void solve(){
    int n=5;
    int r=2;
    int ans=ncr(n,r);
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