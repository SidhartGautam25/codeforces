#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    if(a1==0){
        if(a2 != 0 or a3 != 0 or a4 != 0){
            cout<<"1"<<endl;
            return;
        }else{
            cout<<"0"<<endl;
            return;
        }
    }else{
        int ans=a1+2*min(a2,a3)+min(a1+1,abs(a2-a3)+a4);
        cout<<ans<<endl;
        return;
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