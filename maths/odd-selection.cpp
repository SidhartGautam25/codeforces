#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
   int n,x;
   cin>>n>>x;
   int odd=0,even=0;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]%2==0){
         even++;
     }else{
        odd++;
     }
   }
//    if(odd%2==0 and odd>=2){
//     odd--;//we are ensuring that its sum will always be odd;
//    }
//    //if x is even,we need atleast one even number
//    if(odd==0){
//     cout<<"NO"<<endl;
//     return;
//    }
//    if(x%2==0){
//      if(even>=1){
//         cout<<"YES"<<endl;
//         return;
//      }else{
//         cout<<"NO"<<endl;
//         return;
//      }
//    }
//    //now if we add even elements any number of times to it,it will still be odd
//    //hence we just need to check that our odd+even now just be equal or greater than x
//    if(odd+even>=x){
//      cout<<"YES"<<endl;
//    }else{
//     cout<<"NO"<<endl;
//    }
 if(odd==0){
    cout<<"NO"<<endl;
    return;
 }
 if(odd%2==0){
    odd--;
 }
 int rem;
 if(x<odd){
    if(x%2==0){
        rem=1;
    }else{
        rem=0;
    }
 }else{
    rem=x-odd;
 }
 if(rem<=even){
    cout<<"YES"<<endl;
 }else{
    cout<<"NO"<<endl;
    
 }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}