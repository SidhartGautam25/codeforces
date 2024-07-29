#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX



void solve(){
    ll n,m;
    cin>>n>>m;
    ll c2=0;
    ll c5=0;
    ll t=n;
    while(t>0 && t%2==0){
        c2++;
        t=t/2;
    }
    while(t>0 && t%5==0){
        c5++;
        t=t/5;
    }
    ll k=1;
    while(k<m && c5<c2 && (k*5<=m)){
        c5++;
        k=k*5;
    }
    while(k<m && c2<c5 && (k*2<=m)){
        c2++;
        k=k*2;

    }
    ll zero=0;
    while(k*10<=m){
        zero++;
        k=k*10;
    }
    if(k==1){
        cout<<n*m<<endl;
    }else{
        k *= m / k; 
        cout << n * k << endl;
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