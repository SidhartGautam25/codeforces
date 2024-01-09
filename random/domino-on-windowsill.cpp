#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long n;
   cin>>n;
   int k1,k2;
   cin>>k1>>k2;
   int w,b;
   cin>>w>>b;
   int wmin=min(k1,k2);
   int diff=abs(k1-k2);
   int wextra=diff/2;
   int wtotal=wmin+wextra;
   int btotal=wextra+min(n-k1,n-k2);
   if(w<=wtotal and b<=btotal){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
    

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