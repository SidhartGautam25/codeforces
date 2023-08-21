#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   long long sum=0;
   bool odd=false;
   bool even=false;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    if(temp%2==0){
        even=true;
    }else{
        odd=true;
    }
    sum=sum+temp;

   }
   if(sum%2==0){
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