#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   int countp=0;
   int countn=0;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    if(temp<0){
        countn++;
    }else{
        countp++;
    }
   }
   if(countp>countn and countn%2==0){
    cout<<0<<endl;
    return;
   }else if(countp>countn and countn%2==1){
         cout<<1<<endl;
   }else if(countp==countn){
    if(countn%2==0){
        cout<<0<<endl;
    }else{
        cout<<1<<endl;
    }
   }
   else if(countp<countn){
    int step;
    if((countn-countp)%2==0){
         step=(countn-countp)/2;
         countn=countn-step;
         if(countn%2==0){
            cout<<step<<endl;
         }else{
            cout<<step+1<<endl;
         }
    }else{
        step=(countn-countp)/2+1;
        countn=countn-step;
         if(countn%2==0){
            cout<<step<<endl;
         }else{
            cout<<step+1<<endl;
         }
        
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