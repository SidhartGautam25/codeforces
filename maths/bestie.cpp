#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  int gcd;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i==0){
        gcd=arr[i];
    }else{
        gcd=__gcd(gcd,arr[i]);
    }
  }
  if(gcd==1){
    cout<<"0"<<endl;
    return;
  }else if(__gcd(gcd,__gcd(arr[n-1],n))==1){
    cout<<"1"<<endl;
  }else if(n-2>=0 and __gcd(gcd,__gcd(arr[n-2],n-1))==1){
    cout<<"2"<<endl;
    return;
  }else{
    cout<<"3"<<endl;
    return;
  }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        solve();
     }

    return 0;
}