#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k,q;
  cin>>n>>k>>q;
  vector<int>a(n);
  vector<int>b;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
     if(a[i]<=q){
        count++;
     }else{
        if(count>=k){
            b.push_back(count);   
         }
        count=0;
  }

}
if(count>=k){
    b.push_back(count);
}
 long long ans=0;
  for(int i=0;i<b.size();i++){
    long long temp=b[i];
    ans=ans+(temp-k+1)*(temp-k+2);
  }
  cout<<ans/2<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}