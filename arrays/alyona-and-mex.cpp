#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool check_prime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
   int n,m;
   cin>>n>>m;
   int mmin=n;
   for(int i=0;i<m;i++){
    int l,r;
    cin>>l>>r;
    mmin=min(mmin,r-l+1);
   }
   vector<int>ans(n);
   x=0;
   for(int i=0;i<n;i++){
     ans[i]=x;
     x++;
     if(x==mmin){
        x=0;
     }
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;
 
 
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