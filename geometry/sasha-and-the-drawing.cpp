#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n,k;
    int ans;
    int dble=n+(n-2);
    int rem=0;
    if(k<dble){
        if(k%2==0){
            ans=k/2;
        }else{
            ans=(k/2)+1;
        }

    }else{
        rem=k-dble*2;
    }
    ans=ans+rem;
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