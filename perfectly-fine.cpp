#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
   vector<pair<int,string>>arr(n);
   for(int i=0;i<n;i++){
      int m;
      string sec;
      cin>>m>>sec;
      arr[i].first=m;
      arr[i].second=sec;
   }
   int f=INT_MAX;
   int s=INT_MAX;
   int b=INT_MAX;
   for(int i=0;i<n;i++){
      if(arr[i].second=="11"){
        b=min(b,arr[i].first);
      }else if(arr[i].second=="10"){
        f=min(f,arr[i].first);
      }else if(arr[i].second=="01"){
        s=min(s,arr[i].first);
      }
   }
   if(b != INT_MAX){
    if(f==INT_MAX or s==INT_MAX){
        cout<<b<<endl;
        return;
    }else if(b<=f+s){
        cout<<b<<endl;
        return;
    }else if(b>f+s){
        int ans=f+s;
        cout<<ans<<endl;
        return;
    }
   }else{
    if(f==INT_MAX or s==INT_MAX){
        cout<<-1<<endl;
        return;
    }
    cout<<f+s<<endl;
    return;
   }
   cout<<-1<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}