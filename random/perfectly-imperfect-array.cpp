#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   unordered_set<int>ms;
   bool im=false;
   for(int i=1;i<=100;i++){
    ms.insert(i*i);
   }
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    if(ms.find(temp)==ms.end()){
        im=true;
    }
   }
   if(im==true){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
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