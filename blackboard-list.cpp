#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   int ans=INT_MIN;
   bool neg=false;
   int negative;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    if(temp<0){
        neg=true;
        negative=temp;
    }
    ans=max(ans,temp);
   }
   if(neg==true){
        cout<<negative<<endl;
   }else{
        cout<<ans<<endl;

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