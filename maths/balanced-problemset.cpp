#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve()
{
    ll x,n;
    cin>>x>>n;
    ll ans=1;
    if(n==x){
        cout<<"1"<<endl;
        return;
    }else{
        for(ll i=0;i*i<=x;i++){
            if(x%i==0){
                ll temp=x/i;
                if(temp>=n){
                    ans=i;
                }
            }
        }
    }
    cout<<"ans "<<ans<<endl;

   

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}