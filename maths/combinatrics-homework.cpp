#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    if(a>=b and a>=c){
        int temp=c;
        c=a;
        a=temp;
    }
    if(b>=a and b>=c){
        int temp=c;
        c=b;
        b=temp;
    }
    int mmax=a+b+c-3;
    int mmin=c-(a+b+1);
    if(mmin<=m and m<=mmax){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
 
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