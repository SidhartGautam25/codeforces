#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=min(a,min(b,c));
    int rema=a-ans;
    int remb=b-ans;
    if(a<b){
        int temp=b;
        b=a;
        a=temp;
    }
    if(b<=0){
        cout<<ans<<endl;
        return;
    }
    if(a>=(2*b)){
        ans=ans+b;
    }else{
        ans=ans+(a+b)/3;
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