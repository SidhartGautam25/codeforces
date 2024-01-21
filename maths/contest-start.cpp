#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,x,t;
    cin>>n>>x>>t;

    ll count=0;
    if(x>t){
        cout<<"0"<<endl;
        return;
    }
    ll d=min(t/x,n-1);
    count=count+(d/2)*(1+d);
    count=count+d*(n-(d+1));
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