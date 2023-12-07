#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,t;
    cin>>n>>t;
    if(n%2==0){
        int ans=t%n;
        if(ans==0){
            cout<<n<<endl;
            return;
        }else{
            cout<<ans<<endl;
            return;
        }
    }else{
        int box=n/2;
        int j;
        if(t%box==0){
            j=(t/b)-1;
        }else{
            j=t/b;
        }
        int l=n+j;
        if(l%n==0){
            cout<<n<<endl;
            return;
        }else{
            int ans=l%n;
            cout<<ans<<endl;
            return;
        }
    }
 
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