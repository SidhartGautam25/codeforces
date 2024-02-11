#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod  1000000007

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


void solve()
{
    ll n,m;
    cin>>n>>m;
    ll t=2;
    ll f=(power(2,m))%mod;
    ll s=(power(f-1,n))%mod;
    cout<<s<<endl;

  
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
