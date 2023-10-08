#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   ccin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   priority_queue<int>pq;
   long long sum=0;
   for(int i=0;i<n;i++){
       if(arr[i]==0){
         if(pq.size()>0){
            int t=pq.top();
            sum=sum+t;
            pq.pop();
         }
       }else{
        pq.push(arr[i]);
       }
   }
   cout<<sum<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}