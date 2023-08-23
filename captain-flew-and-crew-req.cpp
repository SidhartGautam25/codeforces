#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   if(n<=30){
    cout<<"NO"<<endl;
   }else{
    cout<<"YES"<<endl;
    if(n==36){
         cout<<"5 6 10 15"<<endl;
    }else if(n==40){
        cout<<"6 9 10 15"<<endl;

    }else if(n==44){
        cout<<"6 10 13 15"<<endl;

    }else{
        cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
    }
    
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