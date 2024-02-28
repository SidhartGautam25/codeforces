#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int k,x,a;
    cin>>k>>x>>a;
    for(int i=1;i<=a;i++){
        int reward=i*k;
        int total=reward+(a-i);
        if(total==(a+1)){
            cout<<"YES"<<endl;
            return;
        }
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