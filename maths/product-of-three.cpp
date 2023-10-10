#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n;
    cin>>n;
    ll a,b,c;
    bool first=false;
    bool rem=false;
    for(int i=2;i*i*i<=n;i++){
        if(n%i==0){
            a=i;
            first=true;
            break;
        }
    }
    if(first==false){
        cout<<"NO"<<endl;
        return;
    }
    ll temp=n/a;
    for(int i=a+1;i*i<=temp;i++){
        if(temp%i==0){
            b=i;
            c=temp/i;
            rem=true;
            break;
        }
    }
    if(rem==true){
        if(b != c and a*b*c==n){
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }else{
        cout<<"NO"<<endl;
        return;
    }
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        //if(t==16)
        solve();
     }

    return 0;
}