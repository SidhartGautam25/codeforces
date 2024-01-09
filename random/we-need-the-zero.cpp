#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   int x=0;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    x=x^temp;
   }
   if(x==0){
    cout<<x<<endl;
   }else{
    if(n%2==1){
        cout<<x<<endl;
    }else{
        cout<<-1<<endl;
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