#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll D=(y-x);
    ll f=D;
    for(int i=2;i*i<=D;i++){
        if(D%i==0){
            f=i;
            break;
        }
    }
    int count;
    if(y%f==0){
        count=y/f;
    }else{
        count=y/f+1;
    }
    if(x>=n){
        cout<<y<<endl;
        return;
    }else{
        
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