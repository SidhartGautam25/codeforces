#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod LLONG_MAX


bool check(vector<int>&arr,int n,int target){
    vector<vector<bool>>dp(n+1,vector<bool>(target+1,false));
    //cout<<"n "<<n<<" target "<<target<<endl;
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(j-arr[i-1]>=0){
                 dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];

            }else{
                dp[i][j]=dp[i-1][j];
            }
           
        }
    }
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=target;j++){
    //         cout<<dp[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][target];
}
int mymsb(int n){
    int m=-n;
    return n&m;
}
 
void solve(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int sum=0;
   for(int i=0;i<n;i++){
    sum=sum+arr[i];
   }
   if(sum%2==1){
     cout<<"0"<<endl;
     return;
   }
   bool need=check(arr,n,sum/2);
   if(need==false){
     cout<<"0"<<endl;
     return;
   }
   cout<<"1"<<endl;
   int min;
   int imin;
   for(int i=0;i<n;i++){
    if(i==0){
        imin=0;
        min=mymsb(arr[i]);
    }else{
        int ms=mymsb(arr[i]);
        if(ms<min){
            min=ms;
            imin=i;
        }
    }

   }
   imin++;
   cout<<imin<<endl;
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t=1;
    
    //cin>>t;
    while(t--){
       // cout<<"t "<<t<<endl;
        solve();
     }
 
    return 0;
}