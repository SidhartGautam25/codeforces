#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   int hcf;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i==1){
        hcf=arr[i];
    }else if(i<n-2) {
        hcf=__gcd(hcf,arr[i]);
    }
   }
   if(n==1 and arr[0]==1){
    cout<<0<<endl;
    return;
   }else if(n==1){
    cout<<1<<endl;
    return;
   }
   else if(n==2 and __gcd(arr[n-1],arr[n-2])==1){
    cout<<0<<endl;
    return;
   }else if(n==2 and __gcd(arr[n-2],__gcd(arr[n-1],n))==1){
    cout<<1<<endl;
    return;
   }else if(n==2 and __gcd(arr[n-1],__gcd(arr[n-2],n-1))==1){
    cout<<2<<endl;
    return;
    return;
   }else if(n==2){
    cout<<3<<endl;
    return;
   }else{
    if(hcf==1){
        cout<<0<<endl;
        return;
    }else if(__gcd(hcf,__gcd(arr[n-1],arr[n-2]))==1){
        cout<<0<<endl;
        return;
    }
    else if(__gcd(__gcd(hcf,arr[n-2]),__gcd(n,arr[n-1]))==1){
        cout<<1<<endl;
        return;
    }else if(__gcd(__gcd(hcf,arr[n-1]),__gcd(arr[n-2],n-1))==1){
        cout<<2<<endl;
        return;
    }else{
        cout<<3<<endl;
        return;
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