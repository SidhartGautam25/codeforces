#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
    int n;
    cin>>n;
    int m=2*n;
    vector<int>arr(m);
    if(n%2==0){
        cout<<"NO"<<endl;
        return;
    }else{
       cout<<"YES"<<endl;
       vector<int>ans(m);
       int x=2*n;
       for(int i=0;i<n;i++){
         if(i%2==0){
            arr[i]=x;
            arr[i+n]=x-1;
            x=x-2;
         }else{
            arr[i+n]=x;
            arr[i]=x-1;
            x=x-2;
         }
       }
    }
    for(int j=0;j<arr.size();j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    //cin>>t;
    while(t--){
        solve();
     }

    return 0;
}