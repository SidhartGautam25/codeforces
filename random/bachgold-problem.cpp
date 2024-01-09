#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   cout<<n/2<<endl;
   if(n%2==0){
       while(n>0){
        cout<<2<<" ";
        n=n-2;
       }
       cout<<endl;
   }else{
    cout<<3<<" ";
    n=n-3;
    while(n>0){
        cout<<2<<" ";
        n=n-2;
    }
    cout<<endl;

   }
}
int main() {
   
    solve();
   
    return 0;
}