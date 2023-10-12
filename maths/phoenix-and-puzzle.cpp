#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool is_comp_sq(ll n){
    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            return true;
        }
    }
    return false;
}

void solve(){
    ll n;
    cin>>n;
    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==0){
        ll temp=n/2;
        if(is_comp_sq(temp)){
            cout<<"YES"<<endl;
            return;
        }else if(temp%2 != 0){
            cout<<"NO"<<endl;
            return;
        }else{
            temp=temp/2;
            if(is_comp_sq(temp)){
                cout<<"YES"<<endl;
                return;
            }else {
                cout<<"NO"<<endl;
                return;
            }
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