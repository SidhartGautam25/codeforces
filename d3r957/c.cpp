#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int tt){
     int n,m,k;
     cin>>n>>m>>k;
    //  int first=0;
    //  int sec=0;
    //  vector<int>arr(n);
    //  int x=n;
    //  for(int i=0;i<n;i++){
    //     arr[i]=x;
    //     x--;
    //  }
    //  for(int i=0;i<n;i++){
    //     if(arr[i]>=k){
    //         first=first+arr[i]*(n-i);
    //     }
    //     if(arr[i]<=m){
    //         sec=sec+arr[i]*(n-i);
    //     }
    //  }
    //  int ans=first-sec;
    //  cout<<ans<<endl;
    vector<int>arr(n);
    
    int x=n;
    int y=m;
    int i=n-1;
    for(i=n-1;i>=0;i--){
       arr[i]=y;
       y--;
       if(y==0){
           break;
       }
    }
    int j=0;
    while(j<i){
        // cout<<"x is "<<x<<endl;
        arr[j]=x;
        x--;
        j++;
    }
    for(int ind=0;ind<n;ind++){
        cout<<arr[ind]<<" ";
    }
    cout<<endl;
}
 

 
signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve(i);
        
    }
    return 0;
}