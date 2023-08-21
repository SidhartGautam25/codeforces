#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   int mmin=INT_MAX;
   bool odd=false;
   bool even=false;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    mmin=min(mmin,temp);
    if(temp%2==1){
        odd=true;
    }else{
        even=true;
    }
   }
   if(mmin%2==1){
    cout<<"YES"<<endl;
   }else if(mmin%2==0 and odd==false){
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