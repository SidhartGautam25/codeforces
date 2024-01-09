#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b;
   cin>>a>>b;
   int x=min(a,b);
   int ans=1;
   for(int i=2;i<=x;i++){
    ans=ans*i;
   }
   cout<<ans<<endl;
}
int main() {
    
        solve();
    
    return 0;
}