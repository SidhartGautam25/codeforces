#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long n;
   cin>>n;
   long long x;
   if(n==1 or n==2){
    cout<<n<<endl;
    return;
   }
   for(long long i=2;i<=n;i++){
    if(n%i==0){
        continue;
    }else{
        x=i;
        break;
    }
   }
   cout<<x-1<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}