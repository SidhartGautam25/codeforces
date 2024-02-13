#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007



ll ncr(int n,int r){
    ll prod=1;
      for(int i = 1; i <= r; i++){
            prod = prod * (n - r + i) / i;
        }
        return prod;
}



void solve(){
    int n;
    cin>>n;
    ll ans=0;
    while(n>0){
        int d=n%10;
        n=n/10;
        ll temp=ncr(d+1,2)+(d+1);
        ans=ans*temp;
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