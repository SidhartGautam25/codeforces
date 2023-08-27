#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   int d=abs(a+c-2*b);
   if(d%3==0){
    cout<<0<<endl;
   }else{
    cout<<1<<endl;
   }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}