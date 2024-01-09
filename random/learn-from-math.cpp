#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   if(n%2==0){
    cout<<4<<" "<<n-4<<endl;
   }else{
    cout<<9<<" "<<n-9<<endl;
   }
}
int main() {
    int t;
   solve();
    return 0;
}