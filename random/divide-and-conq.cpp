#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   long long sum=0;
   int ans=INT_MAX;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    sum=sum+temp;
    arr[i]=temp;
    
   }
   if(sum%2==0){
    cout<<0<<endl;
   }else{
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int count=0;
        while(temp>0 and temp%2 == arr[i]%2){
            temp=temp/2;
            count++;
        }
        if(temp != 0 or arr[i] != 0){
            ans=min(ans,count);
        }
    }
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