#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  int codd=0;
  int ceven=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        ceven++;
    }else{
        codd++;
    }
  }
  if(ceven==0){
    cout<<0<<endl;
    return;
  }else if(codd>0){
    cout<<ceven<<endl;
    return;
  }else{
    int minrsb=arr[0] & -arr[0];
    for(int i=1;i<n;i++){
        int temp=arr[i] & -arr[i];
        minrsb=min(minrsb,temp);
    }
    int count=0;
    while(minrsb != 1){
        minrsb=minrsb/2;
        count++;
    }
    int ans=count+n-1;
    cout<<ans<<endl;
    return;

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