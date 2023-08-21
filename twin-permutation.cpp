#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp; 
   }
   for(int i=0;i<n;i++){
    cout<<n+1-arr[i]<<" ";
   }
   cout<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}