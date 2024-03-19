
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void solve(){
    ll d,k,a,b,t;
    cin>>d>>k>>a>>b>>t;
    ll ans=0;
    if(d<=k){
        ans=d*a;
        cout<<ans<<endl;
        return;
    }else{
        ans=ans+k*a;
        ll rem=d-k;
       
        ll cartime;
        ll tt=rem/k;
        ll frem=rem-tt*k;
        cartime=(rem-frem)*a+t*tt;
        ll wtime=b*(rem-frem);
        ans=ans+min(cartime,wtime)+min(frem*b,frem*a+t);
        cout<<ans<<endl;
        return;
    }

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