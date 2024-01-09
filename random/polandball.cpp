#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   if(n>2){
     cout<<n-2<<endl;
   }else{
    if(n==1){
        cout<<3<<endl;
    }else if(n==2){
        cout<<4<<endl;
    }
   }
}
int main() {
    
        solve();
   
}