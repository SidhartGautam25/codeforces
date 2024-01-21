#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
 
 
 
 
void solve(){  
    ll n;
    cin>>n;
    ll a=1;
    while(a*a<=n){
        a=a+1;
    }
    a=a-1;
    if(a*a==n){
        ll ans=4*a;
        cout<<ans<<endl;
        return;
    }else{
        ll rem=n-a*a;
        ll h=(rem+a-1)/a;
        
        ll ans=4*a+2*h;
        cout<<ans<<endl;
        return;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
   
 
    while(t>0){
    
        solve();
        cout<<endl;
        t=t-1;
     }
 
    return 0;
}