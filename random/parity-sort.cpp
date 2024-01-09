#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   vector<int>copy(n);
   for(int i=0;i<n;i++){
     int temp;
     cin>>temp;
     arr[i]=temp;
     copy[i]=temp;
   }
   sort(copy.begin(),copy.end());
   for(int i=0;i<n;i++){
    if(arr[i]%2==copy[i]%2){
        continue;
    }else{
        cout<<"NO"<<endl;
        return;
    }
   }
   cout<<"YES"<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
