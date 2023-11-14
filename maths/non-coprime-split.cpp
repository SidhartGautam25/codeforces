#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

bool isprime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i ++) {
        if (num % i == 0 ) {
            return false;
        }
    }

    return true;
}
int findfactor(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return i;
        }
    }
    return -1;
}


void solve(){
    int l,r;
    cin>>l>>r;
    if(r<4){
        cout<<"-1"<<endl;
        return;
    }
    if(r>l){
        if(r%2==0){
            int ans=r/2;
            cout<<ans<<" "<<ans<<endl;
            return;
        }else{
            int ans=(r-1)/2;
            cout<<ans<<" "<<ans<<endl;
            return;
        }

    }else{

        if(isprime(l)){
            cout<<"-1"<<endl;
            return;
        }else{
            int a=findfactor(l);
            int b=l-a;
            cout<<a<<" "<<b<<endl;
            return;
        }

    }
    cout<<"-1"<<endl;
 
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