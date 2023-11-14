#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>c(n);
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        if((a[i] | x) != x){
            break;
        }else{
            s=s|a[i];
        }
    }
     for(int i=0;i<n;i++){
        if((b[i] | x )!= x){
            break;
        }else{
            s=s|b[i];
        }
    }
     for(int i=0;i<n;i++){
        if((c[i] | x) != x){
            break;
        }else{
            s=s|c[i];
        }
    }
    if(s==x){
        cout<<"YES"<<endl;
        return;
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
        solve();
     }

    return 0;
}