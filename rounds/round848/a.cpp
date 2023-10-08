#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   int one=0;
   int two=0;
   int  sum=0;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      sum=sum+temp;
      arr[i]=temp;
      if(temp<0){
        one++;
        if(i>0 and arr[i-1]<0){
            two++;
        }
      }

   }
   if(one==0){
    cout<<sum-4<<endl;
    return;
   }else if(one==1){
     cout<<sum<<endl;
     return;
   }else{
     if(two==0){
        cout<<sum<<endl;
        return;
     }else{
        cout<<sum+4<<endl;
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