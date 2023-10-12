#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool is_prime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void solve(){
       ll n;
       cin>>n;
       if(n==2){
         cout<<"1"<<endl;
       }
       else if(n%2==0){
        cout<<"2"<<endl;
       }else{
        if(is_prime(n)){
            cout<<"1"<<endl;
            return;
        }else if(is_prime(n-2)){
            cout<<"2"<<endl;
            return;
        }else{
            cout<<"3"<<endl;
            return;
        }
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