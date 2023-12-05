#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,k;
    cin>>n>>k;
    ll count=0;
    for(int i=1;i<=n;i++){
        ll plast=n;
        ll pseclast=i;
        ll last=n;
        ll seclast=i;
        ll jthterm;
        bool cond=true;
        for(int j=1;j<=k-2;j++){
               jthterm=last-seclast;
               if(jthterm>=last or jthterm>seclast){
                   cond=false;
                   break;
               }
               last=seclast;
               seclast=jthterm;
               if(jthterm<0){
                   cond=false;
                  break;
               }
        }
        if(jthterm>=0 and cond==true){
           
            count++;
        }
    }
    cout<<count<<endl;
 
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