#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   vector<int>given(n-1);
   int mmax=0;
   for(int i=0;i<n-1;i++){
    cin>>given[i];
    mmax=max(mmax,given[i]);
   }
   arr[0]=mmax+1;
   for(int i=1;i<n;i++){
     arr[i]=arr[i-1]+given[i-1];
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"  ";
   }
   cout<<endl;

}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
        
    }
    return 0;
}