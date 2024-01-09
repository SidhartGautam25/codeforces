#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr1(n);
   vector<int>arr2(n);
   for(int i=0;i<n;i++){
    cin>>arr1[i];
   }
   for(int i=0;i<n;i++){
    cin>>arr2[i];
   }
   int a=arr1[n-1];
   int b=arr2[n-1];
   bool cond=true;
   for(int i=0;i<n;i++){
    if(arr1[i]<=a and arr2[i]<=b){
        continue;
    }
    else if(arr1[i]>a and arr2[i]<=a and arr1[i]<=b){
        continue;
    }else if(arr2[i]>b and arr1[i]<=b and arr2[i]<=a){
        continue;
    }
    else{
        cond=false;
        break;
    }
   }
   if(cond==true){
       cout<<"Yes"<<endl;
   }else{
       cout<<"No"<<endl;
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