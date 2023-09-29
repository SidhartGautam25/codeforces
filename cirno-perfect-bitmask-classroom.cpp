#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   int count=0;
   int temp=n;
   while(temp>0){
    int mask=temp & -temp;
    temp=temp-mask;
    count++;
   }
   if(n==1){
    cout<<3<<endl;
    return;

   }else if(count==1){
    cout<<n+1<<endl;
    return;
   }else{
    int rsb=n&-n;
    cout<<rsb<<endl;
    return;
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