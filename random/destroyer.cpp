#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   map<int,int>mp;
   int m=0;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr[i]=temp;
    m=max(m,temp);
    mp[temp]++;
   }
   if(mp.find(0)==mp.end()){
    cout<<"NO"<<endl;
    return;
   }
   for(int i=1;i<=m;i++){
    if(mp.find(i) != mp.end()){
          if(mp[i]<=mp[i-1]){
            continue;
          }else{
            cout<<"NO"<<endl;
            return;
          }
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

    return 0;
}