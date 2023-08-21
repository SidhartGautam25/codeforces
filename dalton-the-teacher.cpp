#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   int count=0;
   for(int i=1;i<=n;i++){
    int temp;
    cin>>temp;
    arr[i-1]=temp;
    if(temp==i){
        count++;
    }
   }
   if(count%2==0){
    cout<<count/2<<endl;
   }else{
    cout<<count/2+1<<endl;
   }

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
