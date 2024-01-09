#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int start=arr[0];
    int overall=arr[0];
    for(int i=1;i<n;i++){
          if(start==0){
            count++;
            start=arr[i];
          }else{
            start=start & arr[i];
          }
          overall=overall & arr[i];
    }
    if(overall<start){
        if(count==1){
            cout<<count<<endl;
            return;
        }else{
            int ans=count-1;
            cout<<ans<<endl;
        }

    }else{
        cout<<count<<endl;
        return;
    }
    //cout<<count<<endl;
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}